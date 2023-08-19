// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"
#include <iostream>
using namespace std;

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();
    PrintLine("Welcome to bulls cows \nWe need you to input your answer sir thank u for that");

}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    ClearScreen();
    
}