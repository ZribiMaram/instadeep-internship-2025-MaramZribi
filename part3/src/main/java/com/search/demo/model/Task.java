package com.search.demo.model;

public class Task {
    protected String id;
    protected String title;
    protected String description;
    protected boolean priority;
    protected String category;
    protected String CompletionStatus;

  public  Task(  String id,String title,String description,boolean priority,String category,String CompletionStatus){
    this.id=id;
    this.title=title;
    this.category=category;
    this.description=description;
    this.priority=priority;
    this.CompletionStatus=CompletionStatus;


   }

public void setId(String id2) {
    // TODO Auto-generated method stub
    throw new UnsupportedOperationException("Unimplemented method 'setId'");
}

}
