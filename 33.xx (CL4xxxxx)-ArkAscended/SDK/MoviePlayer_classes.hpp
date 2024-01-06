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
	bool                                         bWaitForMoviesToComplete;                          // 0x28(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DuplicateTransient)
	bool                                         bMoviesAreSkippable;                               // 0x29(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DuplicateTransient)
	uint8                                        Pad_24BE[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FString>                        StartupMovies;                                     // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMoviePlayerSettings* GetDefaultObj();

};

}


