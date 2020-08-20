import { Component, OnInit, Input } from '@angular/core';
import { Notes } from 'src/app/models/Notes';

@Component({
  selector: 'app-note-item',
  templateUrl: './note-item.component.html',
  styleUrls: ['./note-item.component.css']
})
export class NoteItemComponent implements OnInit {
  
  @Input() note:Notes;


  constructor() { }

  ngOnInit(): void {
  }

  // Set Dynamic Classes
  setClasses(){
    let classes = {
      note:true,
      'is-urgent': this.note.urgency
    }

    return classes;
  }

  onToggle(note) {
    note.urgency = !note.urgency;
  }

  onDelete(note) {
    console.log('delete');
  }
}
