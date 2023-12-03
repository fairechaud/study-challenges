package main

import (
	"encoding/json"
	"encoding/xml"
	"fmt"
	"log"
)

var xmlData = `
<Data>
    <Item>
        <ID>1</ID>
        <Name>Item One</Name>
    </Item>
</Data>
`

type XMLData struct {
	Items []XMLItem `xml:"Item"`
}

type XMLItem struct {
	ID   int    `xml:"ID"`
	Name string `xml:"Name"`
}

type JSONData struct {
	Items []JSONItem `json:"Item"`
}

type JSONItem struct {
	ID   int    `json:"ID"`
	Name string `json:"Name"`
}

func main() {
	var xdata XMLData

	err := xml.Unmarshal([]byte(xmlData), &xdata)
	if err != nil {
		log.Fatalf("Error unmarshaling XML: %v", err)
	}

	jdata := JSONData{
		Items: make([]JSONItem, len(xdata.Items)),
	}
	for i, item := range xdata.Items {
		jdata.Items[i] = JSONItem{ID: item.ID, Name: item.Name}
	}

	jsonOutput, err := json.MarshalIndent(jdata, "", "    ")
	if err != nil {
		log.Fatalf("Error marshaling JSON: %v", err)
	}

	fmt.Println(string(jsonOutput))
}
