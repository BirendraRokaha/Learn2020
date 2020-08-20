import { Injectable } from '@angular/core';
import { HttpClient, HttpHeaders} from '@angular/common/http';
import { Notes } from '../models/Notes'
import { Observable } from 'rxjs';

@Injectable({
  providedIn: 'root'
})
export class NoteService {
  notesUrl:string  = 'https://jsonplaceholder.typicode.com/todos';

  notesLimit = '?_limit=10';

  constructor(private http:HttpClient) { }

  getNotes():Observable<Notes[]> {
    return this.http.get <Notes[]>(`${this.notesUrl}${this.notesLimit}`);
  }
}
