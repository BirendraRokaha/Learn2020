import { Component, OnInit } from '@angular/core';
import { Node } from '../../node';
import { NODES } from '../../mock-nodes';

@Component({
  selector: 'app-nodes',
  templateUrl: './nodes.component.html',
  styleUrls: ['./nodes.component.css']
})
export class NodesComponent implements OnInit {

  nodes = NODES;
  selectedNode: Node;

  constructor() { }

  ngOnInit() {
  }

  onSelect(node: Node): void {
  this.selectedNode = node;
}

}