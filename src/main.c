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
    char filter[1100];
    memset(filter, 0, sizeof(filter));
    size_t bits = sizeof(filter) * 8;

    bloom_add_str(filter, bits, k, "Aardvark");
    bloom_add_str(filter, bits, k, "Albatross");
    bloom_add_str(filter, bits, k, "Alligator");
    bloom_add_str(filter, bits, k, "Alpaca");
    bloom_add_str(filter, bits, k, "Ant");
    bloom_add_str(filter, bits, k, "Anteater");
    bloom_add_str(filter, bits, k, "Antelope");
    bloom_add_str(filter, bits, k, "Ape");
    bloom_add_str(filter, bits, k, "Armadillo");
    bloom_add_str(filter, bits, k, "Ass");
    bloom_add_str(filter, bits, k, "Baboon");
    bloom_add_str(filter, bits, k, "Badger");
    bloom_add_str(filter, bits, k, "Barracuda");
    bloom_add_str(filter, bits, k, "Bat");
    bloom_add_str(filter, bits, k, "Bear");
    bloom_add_str(filter, bits, k, "Beaver");
    bloom_add_str(filter, bits, k, "Bee");
    bloom_add_str(filter, bits, k, "Bison");
    bloom_add_str(filter, bits, k, "Boar");
    bloom_add_str(filter, bits, k, "Buffalo");
    bloom_add_str(filter, bits, k, "Galago");
    bloom_add_str(filter, bits, k, "Butterfly");
    bloom_add_str(filter, bits, k, "Camel");
    bloom_add_str(filter, bits, k, "Caribou");
    bloom_add_str(filter, bits, k, "Cat");
    bloom_add_str(filter, bits, k, "Caterpillar");
    bloom_add_str(filter, bits, k, "Cattle");
    bloom_add_str(filter, bits, k, "Chamois");
    bloom_add_str(filter, bits, k, "Cheetah");
    bloom_add_str(filter, bits, k, "Chicken");
    bloom_add_str(filter, bits, k, "Chimpanzee");
    bloom_add_str(filter, bits, k, "Chinchilla");
    bloom_add_str(filter, bits, k, "Chough");
    bloom_add_str(filter, bits, k, "Clam");
    bloom_add_str(filter, bits, k, "Cobra");
    bloom_add_str(filter, bits, k, "Cockroach");
    bloom_add_str(filter, bits, k, "Cod");
    bloom_add_str(filter, bits, k, "Cormorant");
    bloom_add_str(filter, bits, k, "Coyote");
    bloom_add_str(filter, bits, k, "Crab");
    bloom_add_str(filter, bits, k, "Crane");
    bloom_add_str(filter, bits, k, "Crocodile");
    bloom_add_str(filter, bits, k, "Crow");
    bloom_add_str(filter, bits, k, "Curlew");
    bloom_add_str(filter, bits, k, "Deer");
    bloom_add_str(filter, bits, k, "Dinosaur");
    bloom_add_str(filter, bits, k, "Dog");
    bloom_add_str(filter, bits, k, "Dogfish");
    bloom_add_str(filter, bits, k, "Dolphin");
    bloom_add_str(filter, bits, k, "Donkey");
    bloom_add_str(filter, bits, k, "Dotterel");
    bloom_add_str(filter, bits, k, "Dove");
    bloom_add_str(filter, bits, k, "Dragonfly");
    bloom_add_str(filter, bits, k, "Duck");
    bloom_add_str(filter, bits, k, "Dugong");
    bloom_add_str(filter, bits, k, "Dunlin");
    bloom_add_str(filter, bits, k, "Eagle");
    bloom_add_str(filter, bits, k, "Echidna");
    bloom_add_str(filter, bits, k, "Eel");
    bloom_add_str(filter, bits, k, "Eland");
    bloom_add_str(filter, bits, k, "Elephant");
    bloom_add_str(filter, bits, k, "Elephant seal");
    bloom_add_str(filter, bits, k, "Elk");
    bloom_add_str(filter, bits, k, "Emu");
    bloom_add_str(filter, bits, k, "Falcon");
    bloom_add_str(filter, bits, k, "Ferret");
    bloom_add_str(filter, bits, k, "Finch");
    bloom_add_str(filter, bits, k, "Fish");
    bloom_add_str(filter, bits, k, "Flamingo");
    bloom_add_str(filter, bits, k, "Fly");
    bloom_add_str(filter, bits, k, "Fox");
    bloom_add_str(filter, bits, k, "Frog");
    bloom_add_str(filter, bits, k, "Gaur");
    bloom_add_str(filter, bits, k, "Gazelle");
    bloom_add_str(filter, bits, k, "Gerbil");
    bloom_add_str(filter, bits, k, "Giant Panda");
    bloom_add_str(filter, bits, k, "Giraffe");
    bloom_add_str(filter, bits, k, "Gnat");
    bloom_add_str(filter, bits, k, "Gnu");
    bloom_add_str(filter, bits, k, "Goat");
    bloom_add_str(filter, bits, k, "Goose");
    bloom_add_str(filter, bits, k, "Goldfinch");
    bloom_add_str(filter, bits, k, "Goldfish");
    bloom_add_str(filter, bits, k, "Gorilla");
    bloom_add_str(filter, bits, k, "Goshawk");
    bloom_add_str(filter, bits, k, "Grasshopper");
    bloom_add_str(filter, bits, k, "Grouse");
    bloom_add_str(filter, bits, k, "Guanaco");
    bloom_add_str(filter, bits, k, "Guinea fowl");
    bloom_add_str(filter, bits, k, "Guinea pig");
    bloom_add_str(filter, bits, k, "Gull");
    bloom_add_str(filter, bits, k, "Hamster");
    bloom_add_str(filter, bits, k, "Hare");
    bloom_add_str(filter, bits, k, "Hawk");
    bloom_add_str(filter, bits, k, "Hedgehog");
    bloom_add_str(filter, bits, k, "Heron");
    bloom_add_str(filter, bits, k, "Herring");
    bloom_add_str(filter, bits, k, "Hippopotamus");
    bloom_add_str(filter, bits, k, "Hornet");
    bloom_add_str(filter, bits, k, "Horse");
    bloom_add_str(filter, bits, k, "Human");
    bloom_add_str(filter, bits, k, "Hummingbird");
    bloom_add_str(filter, bits, k, "Hyena");
    bloom_add_str(filter, bits, k, "Jackal");
    bloom_add_str(filter, bits, k, "Jaguar");
    bloom_add_str(filter, bits, k, "Jay");
    bloom_add_str(filter, bits, k, "Jay, Blue");
    bloom_add_str(filter, bits, k, "Jellyfish");
    bloom_add_str(filter, bits, k, "Kangaroo");
    bloom_add_str(filter, bits, k, "Koala");
    bloom_add_str(filter, bits, k, "Komodo dragon");
    bloom_add_str(filter, bits, k, "Kouprey");
    bloom_add_str(filter, bits, k, "Kudu");
    bloom_add_str(filter, bits, k, "Lapwing");
    bloom_add_str(filter, bits, k, "Lark");
    bloom_add_str(filter, bits, k, "Lemur");
    bloom_add_str(filter, bits, k, "Leopard");
    bloom_add_str(filter, bits, k, "Lion");
    bloom_add_str(filter, bits, k, "Llama");
    bloom_add_str(filter, bits, k, "Lobster");
    bloom_add_str(filter, bits, k, "Locust");
    bloom_add_str(filter, bits, k, "Loris");
    bloom_add_str(filter, bits, k, "Louse");
    bloom_add_str(filter, bits, k, "Lyrebird");
    bloom_add_str(filter, bits, k, "Magpie");
    bloom_add_str(filter, bits, k, "Mallard");
    bloom_add_str(filter, bits, k, "Manatee");
    bloom_add_str(filter, bits, k, "Marten");
    bloom_add_str(filter, bits, k, "Meerkat");
    bloom_add_str(filter, bits, k, "Mink");
    bloom_add_str(filter, bits, k, "Mole");
    bloom_add_str(filter, bits, k, "Monkey");
    bloom_add_str(filter, bits, k, "Moose");
    bloom_add_str(filter, bits, k, "Mouse");
    bloom_add_str(filter, bits, k, "Mosquito");
    bloom_add_str(filter, bits, k, "Mule");
    bloom_add_str(filter, bits, k, "Narwhal");
    bloom_add_str(filter, bits, k, "Newt");
    bloom_add_str(filter, bits, k, "Nightingale");
    bloom_add_str(filter, bits, k, "Octopus");
    bloom_add_str(filter, bits, k, "Okapi");
    bloom_add_str(filter, bits, k, "Opossum");
    bloom_add_str(filter, bits, k, "Oryx");
    bloom_add_str(filter, bits, k, "Ostrich");
    bloom_add_str(filter, bits, k, "Otter");
    bloom_add_str(filter, bits, k, "Owl");
    bloom_add_str(filter, bits, k, "Ox");
    bloom_add_str(filter, bits, k, "Oyster");
    bloom_add_str(filter, bits, k, "Panther");
    bloom_add_str(filter, bits, k, "Parrot");
    bloom_add_str(filter, bits, k, "Partridge");
    bloom_add_str(filter, bits, k, "Peafowl");
    bloom_add_str(filter, bits, k, "Pelican");
    bloom_add_str(filter, bits, k, "Penguin");
    bloom_add_str(filter, bits, k, "Pheasant");
    bloom_add_str(filter, bits, k, "Pig");
    bloom_add_str(filter, bits, k, "Pigeon");
    bloom_add_str(filter, bits, k, "Pony");
    bloom_add_str(filter, bits, k, "Porcupine");
    bloom_add_str(filter, bits, k, "Porpoise");
    bloom_add_str(filter, bits, k, "Prairie Dog");
    bloom_add_str(filter, bits, k, "Quail");
    bloom_add_str(filter, bits, k, "Quelea");
    bloom_add_str(filter, bits, k, "Rabbit");
    bloom_add_str(filter, bits, k, "Raccoon");
    bloom_add_str(filter, bits, k, "Rail");
    bloom_add_str(filter, bits, k, "Ram");
    bloom_add_str(filter, bits, k, "Rat");
    bloom_add_str(filter, bits, k, "Raven");
    bloom_add_str(filter, bits, k, "Red deer");
    bloom_add_str(filter, bits, k, "Red panda");
    bloom_add_str(filter, bits, k, "Reindeer");
    bloom_add_str(filter, bits, k, "Rhinoceros");
    bloom_add_str(filter, bits, k, "Rook");
    bloom_add_str(filter, bits, k, "Ruff");
    bloom_add_str(filter, bits, k, "Salamander");
    bloom_add_str(filter, bits, k, "Salmon");
    bloom_add_str(filter, bits, k, "Sand Dollar");
    bloom_add_str(filter, bits, k, "Sandpiper");
    bloom_add_str(filter, bits, k, "Sardine");
    bloom_add_str(filter, bits, k, "Scorpion");
    bloom_add_str(filter, bits, k, "Sea lion");
    bloom_add_str(filter, bits, k, "Sea Urchin");
    bloom_add_str(filter, bits, k, "Seahorse");
    bloom_add_str(filter, bits, k, "Seal");
    bloom_add_str(filter, bits, k, "Shark");
    bloom_add_str(filter, bits, k, "Sheep");
    bloom_add_str(filter, bits, k, "Shrew");
    bloom_add_str(filter, bits, k, "Shrimp");
    bloom_add_str(filter, bits, k, "Skunk");
    bloom_add_str(filter, bits, k, "Snail");
    bloom_add_str(filter, bits, k, "Snake");
    bloom_add_str(filter, bits, k, "Spider");
    bloom_add_str(filter, bits, k, "Squid");
    bloom_add_str(filter, bits, k, "Squirrel");
    bloom_add_str(filter, bits, k, "Starling");
    bloom_add_str(filter, bits, k, "Stingray");
    bloom_add_str(filter, bits, k, "Stinkbug");
    bloom_add_str(filter, bits, k, "Stork");
    bloom_add_str(filter, bits, k, "Swallow");
    bloom_add_str(filter, bits, k, "Swan");
    bloom_add_str(filter, bits, k, "Tapir");
    bloom_add_str(filter, bits, k, "Tarsier");
    bloom_add_str(filter, bits, k, "Termite");
    bloom_add_str(filter, bits, k, "Tiger");
    bloom_add_str(filter, bits, k, "Toad");
    bloom_add_str(filter, bits, k, "Trout");
    bloom_add_str(filter, bits, k, "Turkey");
    bloom_add_str(filter, bits, k, "Turtle");
    bloom_add_str(filter, bits, k, "Vicuña");
    bloom_add_str(filter, bits, k, "Viper");
    bloom_add_str(filter, bits, k, "Vulture");
    bloom_add_str(filter, bits, k, "Wallaby");
    bloom_add_str(filter, bits, k, "Walrus");
    bloom_add_str(filter, bits, k, "Wasp");
    bloom_add_str(filter, bits, k, "Water buffalo");
    bloom_add_str(filter, bits, k, "Weasel");
    bloom_add_str(filter, bits, k, "Whale");
    bloom_add_str(filter, bits, k, "Wolf");
    bloom_add_str(filter, bits, k, "Wolverine");
    bloom_add_str(filter, bits, k, "Wombat");
    bloom_add_str(filter, bits, k, "Woodcock");
    bloom_add_str(filter, bits, k, "Woodpecker");
    bloom_add_str(filter, bits, k, "Worm");
    bloom_add_str(filter, bits, k, "Wren");
    bloom_add_str(filter, bits, k, "Yak");
    bloom_add_str(filter, bits, k, "Zebra");

    printf("%d\n", bloom_possibly_contains_str(filter, bits, k, "Fish"));
    printf("%d\n", bloom_possibly_contains_str(filter, bits, k, "Dog"));
    printf("%d\n", bloom_possibly_contains_str(filter, bits, k, "Cat"));
    printf("%d\n", bloom_possibly_contains_str(filter, bits, k, "at"));
    printf("%d\n", bloom_possibly_contains_str(filter, bits, k, "fis"));
    printf("%d\n", bloom_possibly_contains_str(filter, bits, k, "is"));
    printf("%d\n", bloom_possibly_contains_str(filter, bits, k, "Donkey"));
    printf("%d\n", bloom_possibly_contains_str(filter, bits, k, "Zebra"));

    for (int i = 0; i < 290000; i++) {
        bloom_possibly_contains_str(filter, bits, k, "Fish");
        bloom_possibly_contains_str(filter, bits, k, "Donkey");
        bloom_possibly_contains_str(filter, bits, k, "Woodpecker");
        bloom_possibly_contains_str(filter, bits, k, "Salamander");
        bloom_possibly_contains_str(filter, bits, k, "Prairie");
        bloom_possibly_contains_str(filter, bits, k, "Rhinoceros");
        bloom_possibly_contains_str(filter, bits, k, "Porcupine");
        bloom_possibly_contains_str(filter, bits, k, "Hummingbird");
        bloom_possibly_contains_str(filter, bits, k, "Komodo dragon");
        bloom_possibly_contains_str(filter, bits, k, "Beaver");

    }
    return 0;
}
