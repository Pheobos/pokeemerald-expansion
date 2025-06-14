<<<<<<< HEAD
# pokeemerald-expansion

pokeemerald-expansion is ***a romhack base*** based off pret's [pokeemerald](https://github.com/pret/pokeemerald) decompilation project. ***It is NOT a playable romhack,*** but it has multiple features available to romhackers so that they can create their own games, so it's not meant to be played on its own.

## Should I use this or vanilla pokeemerald for my hack?
The main advantage of using vanilla pokeemerald as a base is being able to link with other official GBA Pokémon games for battles and trading, pokeemerald-expansion can battle and trade with itself out of the box. If you don't mind losing full vanilla compatiblitity, we recommend using pokeemerald-expansion. Otherwise, use pret's pokeemerald. You'll still receive documentation improvements from pret, as we regurlarly incorporate pret's documentation changes.

## Using pokeemerald-expansion

If you use pokeemerald-expansion in your hack, please add RHH (Rom Hacking Hideout) to your credits list. Optionally, you can list the version used, so it can help players know what features to expect.
You can phrase it as the following:
=======
# Ikigai OW Encounter Tools
>>>>>>> marky-ow-encounters
```
Based off RHH's pokeemerald-expansion 1.11.1 https://github.com/rh-hideout/pokeemerald-expansion/
```
These are some of the tools I've made for my hack, aiming to provide a framework to develop your own overworld encounter feature. These rely heavily on **merrp**'s followers branch, so credit goes to them as well as the maintainers who have been recently added it to **pokeemerald-expansion**.

<<<<<<< HEAD
#### Important: DO NOT use GitHub's "Download Zip" option. Using this option will not download the commit history required to update your expansion version or merge other feature branches. Instead, please read [this guide](https://github.com/Pawkkie/Team-Aquas-Asset-Repo/wiki/The-Basics-of-GitHub) to learn how to fork the repository and clone locally from there.

Please follow the instructions in `INSTALL.md` to get pokeemerald-expansion set up on your machine.

### If I already have a project based on regular pokeemerald, can I use pokeemerald-expansion?
Yes! Keep in mind that we keep up with pret's documentation of pokeemerald, which means that if your project a bit old, you might get merge conflicts that you need to solve manually.
- If you haven't set up a remote, run the command `git remote add RHH https://github.com/rh-hideout/pokeemerald-expansion`.
- Once you have your remote set up, run the command `git pull RHH master`.

With this, you'll get the latest version of pokeemerald-expansion, plus a couple of bugfixes that haven't yet been released into the next patch version :)

## Documentation
[Please click here to visit our documentation page.](https://rh-hideout.github.io/pokeemerald-expansion/)

## **How do I update my version of pokeemerald-expansion?**
- If you haven't set up a remote, run the command `git remote add RHH https://github.com/rh-hideout/pokeemerald-expansion`.
- Check your current version.
    - You can check in the debug menu's `Utilities -> Expansion Version` option.
    - If the option is not available, you possibly have version 1.6.2 or older. In that case, please check the [changelogs](docs/CHANGELOG.md) to determine your version based on the features available on your repository.
- ***Important:*** If you are several versions behind, we recommend updating one minor version at a time, skipping directly to the latest patch version (eg, 1.5.3 -> 1.6.2 -> 1.7.4 and so on. Check the [online documentation site](https://rh-hideout.github.io/pokeemerald-expansion/CHANGELOG.html) to see the latest versions of each step.)
- Once you have your remote set up, run the command `git pull RHH expansion/X.Y.Z`, replacing X, Y and Z with the digits of the respective version you want to update to (eg, to update to 1.11.1, use `git pull RHH expansion/1.11.1`).
    - ***Important:*** If you are several versions behind, we recommend updating one minor version at a time, skipping directly to the latest patch version (eg, 1.5.3 -> 1.6.2 -> 1.7.4 and so on)
- Alternatively, you can update to unreleased versions of the expansion.
    - ***master (stable):*** It contains unreleased **bugfixes** that will come in the next patch version. To merge, use `git pull RHH master`.
    - ***upcoming (unstable, with potential bugs):*** It contains unreleased **features** that will come in the next minor version. To merge, use `git pull RHH upcoming`.

### Please consider crediting the entire [list of contributors](https://github.com/rh-hideout/pokeemerald-expansion/wiki/Credits) in your project, as they have all worked hard to develop this project :)

## Who maintains the project?
The project was originally started by DizzyEgg alongside other contributors. Now it is maintained by a team in the ROM Hacking Hideout's community called the "Expansion Senate". ROM Hacking Hideout (RHH for short) is a Discord-based ROM hacking community specialized in Pokémon romhacks. A lot of the discussion in regards of the development of the project happens there.

[Click here to join the RHH Discord Server!](https://discord.gg/6CzjAG6GZk)

## There's a bug in the project. How do I let you guys know?
Please submit any issues with the project [here](https://github.com/rh-hideout/pokeemerald-expansion/issues) and make sure that the issue wasn't reported by someone else by searching using the filters. You may also join the Discord server to try getting more in-depth support from the team and other members of the server.

## Can I contribute even if I'm not a member of ROM Hacking Hideout?
Yes! Contributions are welcome via Pull Requests and they will be reviewed by maintainers in due time.
Also, *please follow the Pull Request template and feel free to discuss how the reviews are being handled. **Communication is key!***  Don't feel discouraged if we take a bit to review your PR, we'll get to it.

## What features are included?
- ***IMPORTANT*❗❗ Read through these to learn what features you can toggle**:
    - [Battle configurations](https://github.com/rh-hideout/pokeemerald-expansion/blob/master/include/config/battle.h)
    - [Pokémon configurations](https://github.com/rh-hideout/pokeemerald-expansion/blob/master/include/config/pokemon.h)
    - [Item configurations](https://github.com/rh-hideout/pokeemerald-expansion/blob/master/include/config/item.h)
    - [Overworld configurations](https://github.com/rh-hideout/pokeemerald-expansion/blob/master/include/config/overworld.h)
    - [Debug configurations](https://github.com/rh-hideout/pokeemerald-expansion/blob/master/include/config/debug.h)
- ***Upgraded battle engine.***
    - Gen5+ damage calculation.
    - 2v2 Wild battles support.
    - 1v2/2v1 battles support.
    - Fairy Type (configurable).
    - Physical/Special/Status Category (configurable).
    - New moves and abilities up to Scarlet and Violet.
        - Custom Contest data up to SwSh, newer moves are WIP. ([source](https://web.archive.org/web/20240910012333/https://pokemonurpg.com/info/contests/rse-move-list/))
    - Battle gimmick support:
        - Mega Evolution
        - Primal Reversion
        - Ultra Burst
        - Z-Moves
            - Gen 8+ damaging moves are given power extrapolated from Gen 7.
            - Gen 8+ status moves have no additional effects, like Healing Wish.
        - Dynamax and Gigantamax
    - Initial battle parameters
        - Queueing stat boosts (aka, Totem Boosts)
        - Setting Terrains.
    - Mid-turn speed recalculation.
    - Quick Poké Ball selection in Wild Battles
        - Hold `R` to change selection with the D-Pad.
        - Press `R` to use last selected Poké Ball.
    - Run option shortcut
    - Faster battle intro - Message and animation/cry happens at the same time.
    - Faster HP drain.
    - Battle Debug menu.
        - Accessed by pressing `Select` on the "Fight/Bag/Pokémon/Run" menu.
    - Option to use AI flags in wild Pokémon battles.
    - FRLG/Gen4+ whiteout money calculation.
    - Configurable experience settings
        - Experience on catch.
        - Splitting experience.
        - Trainer experience.
        - Scaled experience.
        - Unevolved experience boost.
    - Frostbite.
        - Doesn't replace freezing unless a config is enabled, so you can mix and match.
    - Critical capture.
    - Removed badge boosts (configurable).
    - Recalculating stats at the end of every battle.
    - Level 100 Pokémon can earn EVs.
    - Inverse battle support.
    - TONS of other features listed [here](https://github.com/rh-hideout/pokeemerald-expansion/blob/master/include/config/battle.h).
- ***Full Trainer customization***
    - Nickname, EVs, IVs, moves, ability, ball, friendship, nature, gender, shininess.
    - Custom tag battle support (teaming up an NPC in a double battle).
    - Sliding trainer messages.
    - Upgraded Trainer AI
        - Considers newer move effects.
        - New flag options to let you customize the intelligence of your trainers.
        - Faster calculations.
    - Specify Poké Balls by Trainer class.
- ***Pokémon Species from Generations 1-9.***
    - Simplified process to add new Pokémon.
    - Option to disable unwanted families.
    - Updated sprites to DS style.
    - Updated stats, types, abilities and egg groups (configurable).
    - Updated Hoenn's Regional Dex to match ORAS' (configurable).
    - Updated National Dex incorporating the new species.
    - Sprite and animation visualizer.
        - Accesible by pressing `Select` on a Pokémon's Summary screen.
    - Gen4+ evolution methods, with some changes:
        - Mossy Rock, Icy Rock and Magnetic Field locations match ORAS'.
            - Leaf, Ice and Thunder Stones may also be used.
        - Inkay just needs level 30 to evolve.
            - You can't physically have both the RTC and gyroscope, so we skip this requirement.
        - Sylveon uses Gen8+'s evolution method (friendship + Fairy Move).
        - Option to use hold evolution items directly like stones.
    - Hidden Abilities.
        - Available via Ability Patch.
        - Compatible with Ghoul's DexNav branch.
    - All gender differences.
        - Custom female icons for female Hippopotas Hippowdon, Pikachu and Wobbufett
    - 3 Perfect IVs on Legendaries, Mythicals and Ultra Beasts.
- ***Customizable form change tables. Full list of methods [here](https://github.com/rh-hideout/pokeemerald-expansion/blob/master/include/constants/form_change_types.h).***
    - Item holding (eg. Giratina/Arceus)
    - Item using (eg. Oricorio)
        - Time of day option for Shaymin
    - Fainting
    - Battle begin and end (eg. Xerneas)
        - Move change option for Zacian/Zamazenta
    - Battle end in terrains (eg. Burmy)
    - Switched in battle (eg. Palafin)
    - HP Threshold (eg. Darmanitan)
    - Weather (eg. Castform)
    - End of turn (eg. Morpeko)
    - Time of day (eg. Shaymin)
    - Fusions (eg. Kyurem)
- ***Breeding Improvements***
    - Incense Baby Pokémon now happen automatically (configurable).
    - Level 1 eggs (configurable).
    - Poké Ball inheriting (configurable).
    - Egg Move Transfer, including Mirror Herb (configurable).
    - Nature inheriting 100% of the time with Everstone (configurable)
    - Gen6+ Ability inheriting (configurable).
- ***Items from newer Generations. Full list [here](https://github.com/rh-hideout/pokeemerald-expansion/blob/master/include/constants/items.h).***
    - ***Gen 6+ Exp. Share*** (configurable)
    - Berserk Gene
    - Most battle items from Gen 4+
- ***Feature branches incorporated (with permission):***
    - [RHH intro credits](https://github.com/Xhyzi/pokeemerald/tree/rhh-intro-credits) by @Xhyzi.
        - A small signature from all of us to show the collective effort in the project :)
    - [Overworld debug](https://github.com/TheXaman/pokeemerald/tree/tx_debug_system) by @TheXaman
        - May be disabled.
        - Accesible by pressing `R + Start` in the overworld by default.
        - **Additional features**:
            - *Clear Boxes*: cleans every Pokémon from the Boxes.
            - *Hatch an Egg*: lets you choose an Egg in your party and immediately hatch it.
    - [HGSS Pokédex](https://github.com/TheXaman/pokeemerald/tree/tx_pokedexPlus_hgss) by @TheXaman
        - May be disabled.
        - **Additional features**:
            - *Support for new evolution methods*.
            - *Dark Mode*.
    - [Nature Colors](https://github.com/DizzyEggg/pokeemerald/tree/nature_color) in summary screen by @DizzyEggg
    - [Dynamic Multichoice](https://github.com/SBird1337/pokeemerald/tree/feature/dynmulti) by @SBird1337
    - [Saveblock Cleansing](https://github.com/ghoulslash/pokeemerald/tree/saveblock) by @ghoulslash
    - [Followers & Expanded IDs](https://github.com/aarant/pokeemerald/tree/followers-expanded-id) by @aarant
        - May be disabled.
        - Includes Pokémon followers like in HGSS, including interactions.
        - ***Expands the amount of possible object event IDs beyond 255.***
        - ***Includes an implementation of dynamic overworld palettes (DOWP).***
        - **Additional features**:
            - *Pokémon overworld sprites up to Generation 8.*
            - *Integration with our Pokémon Sprite Visualizer, allowing users to browse through the follower sprites alongside battle sprites.*
- ***Other features***
    - Pressing B while holding a Pokémon drops them like in modern games (configurable).
    - Running indoors (configurable).
    - Configurable overworld poison damage.
    - Configurable flags for disabling Wild encounters and Trainer battles.
    - Configurable flags for forcing or disabling Shinies.
    - Reusable TM (configurable).
    - B2W2+ Repel system that also supports LGPE's Lures
    - Gen6+'s EV cap.
    - All bugfixes from pret included.
    - Fixed overworld snow effect.

There are some mechanics, moves and abilities that are missing and being developed. Check [the project's milestones](https://github.com/rh-hideout/pokeemerald-expansion/milestones) and our [issues page](https://github.com/rh-hideout/pokeemerald-expansion/issues) to see which ones.
=======
> **Note**: This branch tracks **pret**'s **pokeemerald**. Please cherry-pick the linked commits or copy them directly.

## Features
- [x] Create a wander in grass movement type for overworld encounters. [Found here](https://github.com/Pawkkie/Team-Aquas-Asset-Repo/wiki/Create-Wander-in-Grass-Movement-Type).
- [x] Create a way to start a wild encounter based on an overworld mon object event, without having to specify the species in a script.
- [x] Create a way to specify the species of an overworld mon object event from a list of species.
- [x] Create a way to specify the species of an overworld mon object event from map wild encounter tables.

### Example - Petalburg Good Rod Encounters
![](https://github.com/HashtagMarky/pokeemerald/blob/ikigai/ow-encounters/ikiagi_ow_encounters.gif)

#### .inc format
```
.set LOCALID_OW_MON 1

PetalburgCity_MapScripts::
    map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_OnTransition
    .byte 0

PetalburgCity_OnTransition:
    setobjectaswildencounter LOCALID_OW_MON, ENCOUNTER_GOOD_ROD
    end

PetalburgCity_EventScript_OverworldMon::
    lock
    callnative GetOverworldMonSpecies
    bufferspeciesname STR_VAR_1, VAR_0x8004
    msgbox PetalburgCity_Text_OverworldMon, MSGBOX_DEFAULT
    closemessage
    startoverworldencounter 5
    release
    end
```

#### .pory format
```
const LOCALID_OW_MON = 1

mapscript PetalburgCity_MapScripts
{
    MAP_SCRIPT_ON_TRANSITION: PetalburgCity_OnTransition
}

script PetalburgCity_OnTransition
{
    setobjectaswildencounter(LOCALID_OW_MON, ENCOUNTER_GOOD_ROD)
}

PetalburgCity_EventScript_OverworldMon::
    lock
    callnative(GetOverworldMonSpecies)
    bufferspeciesname(STR_VAR_1, VAR_0x8004)
    msgbox(PetalburgCity_Text_OverworldMon, MSGBOX_DEFAULT)
    closemessage
    startoverworldencounter(5)
    release
    end
```

For help setting up mapscripts, please see the [Team Aqua's Hideout Video Tutorial](https://youtu.be/b7AQP6WND-4?si=7q06ybC2k65GkQI6), and if you need it, the [poryscript guide](https://github.com/huderlem/poryscript#mapscripts-statement).

## Commits
### Start Overworld Encounters & Get Overworld Species
Start a wild battle against an overworld mon object event with a defined level.
```
.macro startoverworldencounter level=req
callnative GetOverworldMonSpecies
playmoncry VAR_0x8004, CRY_MODE_ENCOUNTER
createmon B_SIDE_OPPONENT, B_FLANK_LEFT, VAR_0x8004, \level, isShiny=VAR_0x8005
waitmoncry
dowildbattle
.endm
```

This commit adds a function, `GetOverworldMonSpecies`, that sets `VAR_0x8004` to a species based on the last selected object event and `VAR_8005` to it's shinyness. If the object event isn't tied to a species, it returns `SPECIES_NONE`, however this can be changed very easily. `GetOverworldMonSpecies` can be called at any point in a `.inc`/`.pory` scripts though `callnative GetOverworldMonSpecies`/`callnative(GetOverworldMonSpecies)` or normally in C. It is used in the `startoverworldencounter` macro which plays the relevant species cry before starting a wild encounter.

> **Note**: ~~There is a known bug that I haven't yet squashed where adding a value an objects Sight Radius / Berry Tree ID may cause a species value to not be obtained correctly.~~ The function that caused this bug was removed in `pokeemerald-expansion 1.10.0`. [This was pull request that removed it](https://github.com/rh-hideout/pokeemerald-expansion/pull/5475).

#### October 3rd 2024
[Commit: de53fa5e2d](https://github.com/HashtagMarky/pokeemerald/commit/de53fa5e2d1e46efe09e1d829137d030be81d402)

---
### Set Object as Wild Encounter
Sets a variable object event to an overworld mon for a wild encounter. It should be noted, even though `.byte 0xe5` was used, you should change it to the next free value in `gScriptCmdTable` found in `scr_cmd_table.inc`.
```
#define ENCOUNTER_FIXED         0
#define ENCOUNTER_LAND          1
#define ENCOUNTER_SURF          2
#define ENCOUNTER_ROCK_SMASH    3
#define ENCOUNTER_OLD_ROD       4
#define ENCOUNTER_GOOD_ROD      5
#define ENCOUNTER_SUPER_ROD     6
#define ENCOUNTER_TYPES         7

.macro setobjectaswildencounter localId:req, encounterType=ENCOUNTER_FIXED
.byte 0xe5
.2byte \localId
.byte \encounterType
release
.endm
```
![Variable Object Event Usage Example](https://github.com/user-attachments/assets/6fa37858-f964-4916-8d35-c973f570b269)

This commit adds a few functions in order to change a variable object event into a species ready for an overworld encounter, by using the `setobjectaswildencounter` macro. The called function will read the object associated with the `localId` that is given, checking if it is a variable object event. If this check is passed, the variable associated with it is automatically set to allow for an overworld species to spawn.

By setting the encounter type to `ENCOUNTER_FIXED`, the species will be set using the function `ReturnFixedSpeciesEncounter`. This can be supplemented by adding to the switch statement, potentially with random chances or even by using map headers to determine encounters by map section or type. Using any other type will return a random species from the relevant encounter tables used.

This also uses `SPAWN_ODDS` to define whether or not the object should be shown by setting it's flag. Objects are set to always spawn by default, but if you would like to decrease these odds, I would recommend giving the object temporary flags in order to allow them a new chance to spawn when transitioning to the map again. This also allows encounters to be removed after battle, and have a chance to respawn after leaving the area.

> **Note**: I haven't played around with variable object events too much, and these may not play too nicely everywhere in vanilla as they are set at various points. The script `Common_EventScript_SetupRivalGfxId` is one way this is done, setting `VAR_OBJ_GFX_ID_0` and `VAR_OBJ_GFX_ID_3` when transitioning to many maps.

#### October 4th 2024
[Commit: 28156b0b5f](https://github.com/HashtagMarky/pokeemerald/commit/28156b0b5fa6933f42c5673026d046d5e6c2e566)

---
### Automatically Give Wild Encounters the Same Level as Normal Wild Encounters

> **Note**: The changes also refactor some of the functions in `wild_encounter.c` to return `struct WildMon` instead of just a species constant.

Thanks to the changes in this [Pull Request](https://github.com/HashtagMarky/pokeemerald/pull/1) by [LordRainDance2](https://github.com/lordraindance2), overworld encounters can now have their levels dynamically set the same way normal wild encounters do. This also allows for a common event script to be defined using the new macro `startwildoverworldencounter` which remove the need to make a script for every single overworld encounter, working as an useall solution. The individual macros can still be used in individual scripts, however.

```
Common_EventScript_OWWildEncounter::
	lock
	faceplayer
	startwildoverworldencounter
	release
	end
```

This PR make it easier to focus on implementing the encounters with minimal setup or making more scripts, though the objects still have to be defined as wild encounters though in poryscript.

## Further Work
My own implementation of dedicated overworld encounters feature is still a giant WIP, but if I make any updates on these tools or develop any others I will update this page. If you find any bugs, or even have any fixes, please feel free to submit a PR or ping me (HashtagMarky) a message on the TAH Discord.  
>>>>>>> marky-ow-encounters
