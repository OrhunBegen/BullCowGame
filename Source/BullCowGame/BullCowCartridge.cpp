// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"
#include <iostream>
using namespace std;

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();
    PrintLine("Hi There welcome to our game\nWe need you to input your answer sir");

}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
   ClearScreen();

}