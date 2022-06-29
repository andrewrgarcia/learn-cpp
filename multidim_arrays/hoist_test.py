#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Fri Jun 24 15:05:23 2022

@author: andrew
"""

def func1(i,j,N):
    
    return N*i+ j

def func2(i,j,N):
    
    return N*j+ i



def do():

    funcs = [func1,func2]
    
    func = funcs[1]; #hoisted
    
    
    # funcs = vector[N*j+ i]
    
    N = 20
    
    vector = [i for i in range(N*N)]
    
    dst = (N*N)*[0]
    
    for i in range(N):
        for j in range(N):
            dst[N*i + j] =  vector[func(i,j,N)]
        
        
        