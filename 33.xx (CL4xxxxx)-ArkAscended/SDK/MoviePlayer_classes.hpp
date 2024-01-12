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
	bool                                         bWaitForMoviesToComplete;                          // 0x28(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, DuplicateTransient)
	bool                                         bMoviesAreSkippable;                               // 0x29(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, DuplicateTransient)
	uint8                                        Pad_2E6E[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FString>                        StartupMovies;                                     // 0x30(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMoviePlayerSettings* GetDefaultObj();

};

}


