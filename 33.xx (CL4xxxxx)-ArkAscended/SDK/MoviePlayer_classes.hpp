#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x40 - 0x28)
// Class MoviePlayer.MoviePlayerSettings
class UMoviePlayerSettings : public UObject
{
public:
	bool                                         bWaitForMoviesToComplete;                          // 0x28(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
	bool                                         bMoviesAreSkippable;                               // 0x29(0x1)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_110F[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FString>                        StartupMovies;                                     // 0x30(0x10)(Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMoviePlayerSettings* GetDefaultObj();

};

}


