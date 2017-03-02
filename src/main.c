/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: gregc
 *
 * Created on March 1, 2017, 11:03 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <inttypes.h>
#include "city.h"
#include "bloom.h"


int main() {
    
    int k = 20;
    uint8_t bitmap[1100];
    memset(bitmap, 0, sizeof(bitmap));
    size_t bits = sizeof(bitmap) * 8;
    
    bloom_add_str(bitmap, bits, k, "Aardvark");
    bloom_add_str(bitmap, bits, k, "Albatross");
    bloom_add_str(bitmap, bits, k, "Alligator");
    bloom_add_str(bitmap, bits, k, "Alpaca");
    bloom_add_str(bitmap, bits, k, "Ant");
    bloom_add_str(bitmap, bits, k, "Anteater");
    bloom_add_str(bitmap, bits, k, "Antelope");
    bloom_add_str(bitmap, bits, k, "Ape");
    bloom_add_str(bitmap, bits, k, "Armadillo");
    bloom_add_str(bitmap, bits, k, "Ass");
    bloom_add_str(bitmap, bits, k, "Baboon");
    bloom_add_str(bitmap, bits, k, "Badger");
    bloom_add_str(bitmap, bits, k, "Barracuda");
    bloom_add_str(bitmap, bits, k, "Bat");
    bloom_add_str(bitmap, bits, k, "Bear");
    bloom_add_str(bitmap, bits, k, "Beaver");
    bloom_add_str(bitmap, bits, k, "Bee");
    bloom_add_str(bitmap, bits, k, "Bison");
    bloom_add_str(bitmap, bits, k, "Boar");
    bloom_add_str(bitmap, bits, k, "Buffalo");
    bloom_add_str(bitmap, bits, k, "Galago");
    bloom_add_str(bitmap, bits, k, "Butterfly");
    bloom_add_str(bitmap, bits, k, "Camel");
    bloom_add_str(bitmap, bits, k, "Caribou");
    bloom_add_str(bitmap, bits, k, "Cat");
    bloom_add_str(bitmap, bits, k, "Caterpillar");
    bloom_add_str(bitmap, bits, k, "Cattle");
    bloom_add_str(bitmap, bits, k, "Chamois");
    bloom_add_str(bitmap, bits, k, "Cheetah");
    bloom_add_str(bitmap, bits, k, "Chicken");
    bloom_add_str(bitmap, bits, k, "Chimpanzee");
    bloom_add_str(bitmap, bits, k, "Chinchilla");
    bloom_add_str(bitmap, bits, k, "Chough");
    bloom_add_str(bitmap, bits, k, "Clam");
    bloom_add_str(bitmap, bits, k, "Cobra");
    bloom_add_str(bitmap, bits, k, "Cockroach");
    bloom_add_str(bitmap, bits, k, "Cod");
    bloom_add_str(bitmap, bits, k, "Cormorant");
    bloom_add_str(bitmap, bits, k, "Coyote");
    bloom_add_str(bitmap, bits, k, "Crab");
    bloom_add_str(bitmap, bits, k, "Crane");
    bloom_add_str(bitmap, bits, k, "Crocodile");
    bloom_add_str(bitmap, bits, k, "Crow");
    bloom_add_str(bitmap, bits, k, "Curlew");
    bloom_add_str(bitmap, bits, k, "Deer");
    bloom_add_str(bitmap, bits, k, "Dinosaur");
    bloom_add_str(bitmap, bits, k, "Dog");
    bloom_add_str(bitmap, bits, k, "Dogfish");
    bloom_add_str(bitmap, bits, k, "Dolphin");
    bloom_add_str(bitmap, bits, k, "Donkey");
    bloom_add_str(bitmap, bits, k, "Dotterel");
    bloom_add_str(bitmap, bits, k, "Dove");
    bloom_add_str(bitmap, bits, k, "Dragonfly");
    bloom_add_str(bitmap, bits, k, "Duck");
    bloom_add_str(bitmap, bits, k, "Dugong");
    bloom_add_str(bitmap, bits, k, "Dunlin");
    bloom_add_str(bitmap, bits, k, "Eagle");
    bloom_add_str(bitmap, bits, k, "Echidna");
    bloom_add_str(bitmap, bits, k, "Eel");
    bloom_add_str(bitmap, bits, k, "Eland");
    bloom_add_str(bitmap, bits, k, "Elephant");
    bloom_add_str(bitmap, bits, k, "Elephant seal");
    bloom_add_str(bitmap, bits, k, "Elk");
    bloom_add_str(bitmap, bits, k, "Emu");
    bloom_add_str(bitmap, bits, k, "Falcon");
    bloom_add_str(bitmap, bits, k, "Ferret");
    bloom_add_str(bitmap, bits, k, "Finch");
    bloom_add_str(bitmap, bits, k, "Fish");
    bloom_add_str(bitmap, bits, k, "Flamingo");
    bloom_add_str(bitmap, bits, k, "Fly");
    bloom_add_str(bitmap, bits, k, "Fox");
    bloom_add_str(bitmap, bits, k, "Frog");
    bloom_add_str(bitmap, bits, k, "Gaur");
    bloom_add_str(bitmap, bits, k, "Gazelle");
    bloom_add_str(bitmap, bits, k, "Gerbil");
    bloom_add_str(bitmap, bits, k, "Giant Panda");
    bloom_add_str(bitmap, bits, k, "Giraffe");
    bloom_add_str(bitmap, bits, k, "Gnat");
    bloom_add_str(bitmap, bits, k, "Gnu");
    bloom_add_str(bitmap, bits, k, "Goat");
    bloom_add_str(bitmap, bits, k, "Goose");
    bloom_add_str(bitmap, bits, k, "Goldfinch");
    bloom_add_str(bitmap, bits, k, "Goldfish");
    bloom_add_str(bitmap, bits, k, "Gorilla");
    bloom_add_str(bitmap, bits, k, "Goshawk");
    bloom_add_str(bitmap, bits, k, "Grasshopper");
    bloom_add_str(bitmap, bits, k, "Grouse");
    bloom_add_str(bitmap, bits, k, "Guanaco");
    bloom_add_str(bitmap, bits, k, "Guinea fowl");
    bloom_add_str(bitmap, bits, k, "Guinea pig");
    bloom_add_str(bitmap, bits, k, "Gull");
    bloom_add_str(bitmap, bits, k, "Hamster");
    bloom_add_str(bitmap, bits, k, "Hare");
    bloom_add_str(bitmap, bits, k, "Hawk");
    bloom_add_str(bitmap, bits, k, "Hedgehog");
    bloom_add_str(bitmap, bits, k, "Heron");
    bloom_add_str(bitmap, bits, k, "Herring");
    bloom_add_str(bitmap, bits, k, "Hippopotamus");
    bloom_add_str(bitmap, bits, k, "Hornet");
    bloom_add_str(bitmap, bits, k, "Horse");
    bloom_add_str(bitmap, bits, k, "Human");
    bloom_add_str(bitmap, bits, k, "Hummingbird");
    bloom_add_str(bitmap, bits, k, "Hyena");
    bloom_add_str(bitmap, bits, k, "Jackal");
    bloom_add_str(bitmap, bits, k, "Jaguar");
    bloom_add_str(bitmap, bits, k, "Jay");
    bloom_add_str(bitmap, bits, k, "Jay, Blue");
    bloom_add_str(bitmap, bits, k, "Jellyfish");
    bloom_add_str(bitmap, bits, k, "Kangaroo");
    bloom_add_str(bitmap, bits, k, "Koala");
    bloom_add_str(bitmap, bits, k, "Komodo dragon");
    bloom_add_str(bitmap, bits, k, "Kouprey");
    bloom_add_str(bitmap, bits, k, "Kudu");
    bloom_add_str(bitmap, bits, k, "Lapwing");
    bloom_add_str(bitmap, bits, k, "Lark");
    bloom_add_str(bitmap, bits, k, "Lemur");
    bloom_add_str(bitmap, bits, k, "Leopard");
    bloom_add_str(bitmap, bits, k, "Lion");
    bloom_add_str(bitmap, bits, k, "Llama");
    bloom_add_str(bitmap, bits, k, "Lobster");
    bloom_add_str(bitmap, bits, k, "Locust");
    bloom_add_str(bitmap, bits, k, "Loris");
    bloom_add_str(bitmap, bits, k, "Louse");
    bloom_add_str(bitmap, bits, k, "Lyrebird");
    bloom_add_str(bitmap, bits, k, "Magpie");
    bloom_add_str(bitmap, bits, k, "Mallard");
    bloom_add_str(bitmap, bits, k, "Manatee");
    bloom_add_str(bitmap, bits, k, "Marten");
    bloom_add_str(bitmap, bits, k, "Meerkat");
    bloom_add_str(bitmap, bits, k, "Mink");
    bloom_add_str(bitmap, bits, k, "Mole");
    bloom_add_str(bitmap, bits, k, "Monkey");
    bloom_add_str(bitmap, bits, k, "Moose");
    bloom_add_str(bitmap, bits, k, "Mouse");
    bloom_add_str(bitmap, bits, k, "Mosquito");
    bloom_add_str(bitmap, bits, k, "Mule");
    bloom_add_str(bitmap, bits, k, "Narwhal");
    bloom_add_str(bitmap, bits, k, "Newt");
    bloom_add_str(bitmap, bits, k, "Nightingale");
    bloom_add_str(bitmap, bits, k, "Octopus");
    bloom_add_str(bitmap, bits, k, "Okapi");
    bloom_add_str(bitmap, bits, k, "Opossum");
    bloom_add_str(bitmap, bits, k, "Oryx");
    bloom_add_str(bitmap, bits, k, "Ostrich");
    bloom_add_str(bitmap, bits, k, "Otter");
    bloom_add_str(bitmap, bits, k, "Owl");
    bloom_add_str(bitmap, bits, k, "Ox");
    bloom_add_str(bitmap, bits, k, "Oyster");
    bloom_add_str(bitmap, bits, k, "Panther");
    bloom_add_str(bitmap, bits, k, "Parrot");
    bloom_add_str(bitmap, bits, k, "Partridge");
    bloom_add_str(bitmap, bits, k, "Peafowl");
    bloom_add_str(bitmap, bits, k, "Pelican");
    bloom_add_str(bitmap, bits, k, "Penguin");
    bloom_add_str(bitmap, bits, k, "Pheasant");
    bloom_add_str(bitmap, bits, k, "Pig");
    bloom_add_str(bitmap, bits, k, "Pigeon");
    bloom_add_str(bitmap, bits, k, "Pony");
    bloom_add_str(bitmap, bits, k, "Porcupine");
    bloom_add_str(bitmap, bits, k, "Porpoise");
    bloom_add_str(bitmap, bits, k, "Prairie Dog");
    bloom_add_str(bitmap, bits, k, "Quail");
    bloom_add_str(bitmap, bits, k, "Quelea");
    bloom_add_str(bitmap, bits, k, "Rabbit");
    bloom_add_str(bitmap, bits, k, "Raccoon");
    bloom_add_str(bitmap, bits, k, "Rail");
    bloom_add_str(bitmap, bits, k, "Ram");
    bloom_add_str(bitmap, bits, k, "Rat");
    bloom_add_str(bitmap, bits, k, "Raven");
    bloom_add_str(bitmap, bits, k, "Red deer");
    bloom_add_str(bitmap, bits, k, "Red panda");
    bloom_add_str(bitmap, bits, k, "Reindeer");
    bloom_add_str(bitmap, bits, k, "Rhinoceros");
    bloom_add_str(bitmap, bits, k, "Rook");
    bloom_add_str(bitmap, bits, k, "Ruff");
    bloom_add_str(bitmap, bits, k, "Salamander");
    bloom_add_str(bitmap, bits, k, "Salmon");
    bloom_add_str(bitmap, bits, k, "Sand Dollar");
    bloom_add_str(bitmap, bits, k, "Sandpiper");
    bloom_add_str(bitmap, bits, k, "Sardine");
    bloom_add_str(bitmap, bits, k, "Scorpion");
    bloom_add_str(bitmap, bits, k, "Sea lion");
    bloom_add_str(bitmap, bits, k, "Sea Urchin");
    bloom_add_str(bitmap, bits, k, "Seahorse");
    bloom_add_str(bitmap, bits, k, "Seal");
    bloom_add_str(bitmap, bits, k, "Shark");
    bloom_add_str(bitmap, bits, k, "Sheep");
    bloom_add_str(bitmap, bits, k, "Shrew");
    bloom_add_str(bitmap, bits, k, "Shrimp");
    bloom_add_str(bitmap, bits, k, "Skunk");
    bloom_add_str(bitmap, bits, k, "Snail");
    bloom_add_str(bitmap, bits, k, "Snake");
    bloom_add_str(bitmap, bits, k, "Spider");
    bloom_add_str(bitmap, bits, k, "Squid");
    bloom_add_str(bitmap, bits, k, "Squirrel");
    bloom_add_str(bitmap, bits, k, "Starling");
    bloom_add_str(bitmap, bits, k, "Stingray");
    bloom_add_str(bitmap, bits, k, "Stinkbug");
    bloom_add_str(bitmap, bits, k, "Stork");
    bloom_add_str(bitmap, bits, k, "Swallow");
    bloom_add_str(bitmap, bits, k, "Swan");
    bloom_add_str(bitmap, bits, k, "Tapir");
    bloom_add_str(bitmap, bits, k, "Tarsier");
    bloom_add_str(bitmap, bits, k, "Termite");
    bloom_add_str(bitmap, bits, k, "Tiger");
    bloom_add_str(bitmap, bits, k, "Toad");
    bloom_add_str(bitmap, bits, k, "Trout");
    bloom_add_str(bitmap, bits, k, "Turkey");
    bloom_add_str(bitmap, bits, k, "Turtle");
    bloom_add_str(bitmap, bits, k, "Vicuña");
    bloom_add_str(bitmap, bits, k, "Viper");
    bloom_add_str(bitmap, bits, k, "Vulture");
    bloom_add_str(bitmap, bits, k, "Wallaby");
    bloom_add_str(bitmap, bits, k, "Walrus");
    bloom_add_str(bitmap, bits, k, "Wasp");
    bloom_add_str(bitmap, bits, k, "Water buffalo");
    bloom_add_str(bitmap, bits, k, "Weasel");
    bloom_add_str(bitmap, bits, k, "Whale");
    bloom_add_str(bitmap, bits, k, "Wolf");
    bloom_add_str(bitmap, bits, k, "Wolverine");
    bloom_add_str(bitmap, bits, k, "Wombat");
    bloom_add_str(bitmap, bits, k, "Woodcock");
    bloom_add_str(bitmap, bits, k, "Woodpecker");
    bloom_add_str(bitmap, bits, k, "Worm");
    bloom_add_str(bitmap, bits, k, "Wren");
    bloom_add_str(bitmap, bits, k, "Yak");
    bloom_add_str(bitmap, bits, k, "Zebra");
    
    printf("%d\n", bloom_possibly_contains_str(bitmap, bits, k, "Fish"));
    printf("%d\n", bloom_possibly_contains_str(bitmap, bits, k, "Dog"));
    printf("%d\n", bloom_possibly_contains_str(bitmap, bits, k, "Cat"));
    printf("%d\n", bloom_possibly_contains_str(bitmap, bits, k, "at"));
    printf("%d\n", bloom_possibly_contains_str(bitmap, bits, k, "fis"));
    printf("%d\n", bloom_possibly_contains_str(bitmap, bits, k, "is"));
    printf("%d\n", bloom_possibly_contains_str(bitmap, bits, k, "Donkey"));
    printf("%d\n", bloom_possibly_contains_str(bitmap, bits, k, "Zebra"));
    
    for (int i = 0; i < 290000; i++) {
        bloom_possibly_contains_str(bitmap, bits, k, "Fish");
        bloom_possibly_contains_str(bitmap, bits, k, "Donkey");
        bloom_possibly_contains_str(bitmap, bits, k, "Woodpecker");
        bloom_possibly_contains_str(bitmap, bits, k, "Salamander");
        bloom_possibly_contains_str(bitmap, bits, k, "Prairie");
        bloom_possibly_contains_str(bitmap, bits, k, "Rhinoceros");
        bloom_possibly_contains_str(bitmap, bits, k, "Porcupine");
        bloom_possibly_contains_str(bitmap, bits, k, "Hummingbird");
        bloom_possibly_contains_str(bitmap, bits, k, "Komodo dragon");
        bloom_possibly_contains_str(bitmap, bits, k, "Beaver");
        
    }
    return 0;
}
