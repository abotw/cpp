#!/bin/bash

# Loop to create files lab1.md to lab5.md
for i in {1..5}
do
  # Create the file lab$i.md and write the specified content into it
  echo "---" > lab$i.md
  echo "title: Lab $i: XX" >> lab$i.md
  echo "layout: home" >> lab$i.md
  echo "parent: Labs" >> lab$i.md
  echo "---" >> lab$i.md
done