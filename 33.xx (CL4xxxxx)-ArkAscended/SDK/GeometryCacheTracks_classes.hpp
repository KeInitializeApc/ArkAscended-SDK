#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x138 - 0xF0)
// Class GeometryCacheTracks.MovieSceneGeometryCacheSection
class UMovieSceneGeometryCacheSection : public UMovieSceneSection
{
public:
	struct FMovieSceneGeometryCacheParams        Params;                                            // 0xF0(0x48)(Edit, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneGeometryCacheSection* GetDefaultObj();

};

// 0x18 (0xB0 - 0x98)
// Class GeometryCacheTracks.MovieSceneGeometryCacheTrack
class UMovieSceneGeometryCacheTrack : public UMovieSceneNameableTrack
{
public:
	uint8                                        Pad_901[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class UMovieSceneSection*>            AnimationSections;                                 // 0xA0(0x10)(Net, EditFixedSize, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneGeometryCacheTrack* GetDefaultObj();

};

}

