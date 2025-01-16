This program converts Apex Legends material shader data, so that the data can be used in a specific version of its game engine.
It takes the uber static buffer, parses it out and reorders the structure so that all the fields in the struct map to their correct memory locations.

To run the program: `uberconv <path_to_material>.uber`

Planned features:
- convert normal shaders by converting the CUberBufferStatic struct by reordering its members to match V15 materials.
- convert sprite shaders by converting the CBufSpriteCard struct by reordering its members to match V15 materials.
