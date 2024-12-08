package com.search.demo.service;


 
import java.util.List;
import java.util.Optional;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.search.demo.model.Task;

@Service
public class TaskService {

    @Autowired
    private TaskRepository TaskRepository;

 
    public Task createTask(Task Task) {
        return TaskRepository.save(Task);
    }

    

    public Iterable<Task> findAllTasks() {
        return TaskRepository.findAll();
    }

    public Task updateTask(String id, Task Task) {
        Task.setId(id);
        return TaskRepository.save(Task);
    }

    public void deleteTaskById(String id) {
        TaskRepository.deleteById(id);
    }

   

  
}


