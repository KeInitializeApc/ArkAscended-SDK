#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x128 - 0xF0)
// Class GeometryCollectionTracks.MovieSceneGeometryCollectionSection
class UMovieSceneGeometryCollectionSection : public UMovieSceneSection
{
public:
	struct FMovieSceneGeometryCollectionParams   Params;                                            // 0xF0(0x38)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneGeometryCollectionSection* GetDefaultObj();

};

// 0x18 (0xB0 - 0x98)
// Class GeometryCollectionTracks.MovieSceneGeometryCollectionTrack
class UMovieSceneGeometryCollectionTrack : public UMovieSceneNameableTrack
{
public:
	uint8                                        Pad_2417[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UMovieSceneSection*>            AnimationSections;                                 // 0xA0(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneGeometryCollectionTrack* GetDefaultObj();

};

}


