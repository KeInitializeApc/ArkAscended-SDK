#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class Soundscape.SoundscapeBPFunctionLibrary
class USoundscapeBPFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USoundscapeBPFunctionLibrary* GetDefaultObj();

	class UObject* SpawnSoundscapePalette(class USoundscapePalette** SoundscapePaletteIn, class UActiveSoundscapePalette** SoundscapePaletteAgentsOut, bool ReturnValue);
	class UObject* SpawnSoundscapeColor(class USoundscapeColor** SoundscapeColorIn, class UActiveSoundscapeColor* ActiveSoundscapeColor, bool ReturnValue);
};

// 0xD8 (0x100 - 0x28)
// Class Soundscape.SoundscapeColor
class USoundscapeColor : public UObject
{
public:
	class USoundBase*                            Sound;                                             // 0x28(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	float                                        VolumeBase;                                        // 0x30(0x4)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	float                                        PitchBase;                                         // 0x34(0x4)(ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	struct FSoundscapeColorModulationSettings    ModulationBehavior;                                // 0x38(0x30)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	struct FSoundscapeColorPlaybackSettings      PlaybackBehavior;                                  // 0x68(0xC)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	uint8                                        Pad_E6B[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSoundscapeColorSpawnSettings         SpawnBehavior;                                     // 0x78(0x88)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class USoundscapeColor* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class Soundscape.ActiveSoundscapeColorVoice
class UActiveSoundscapeColorVoice : public UObject
{
public:
	class UAudioComponent*                       AudioComponent;                                    // 0x28(0x8)(ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	struct FTimerHandle                          TimerHandle;                                       // 0x30(0x8)(Edit, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
	bool                                         bFree;                                             // 0x38(0x1)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_E6E[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UActiveSoundscapeColorVoice* GetDefaultObj();

	float StopLimitedDurationVoice();
};

// 0x168 (0x190 - 0x28)
// Class Soundscape.ActiveSoundscapeColor
class UActiveSoundscapeColor : public UObject
{
public:
	class USoundBase*                            Sound;                                             // 0x28(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_E77[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSoundscapeColorModulationSettings    ModulationBehavior;                                // 0x38(0x30)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	struct FSoundscapeColorPlaybackSettings      PlaybackBehavior;                                  // 0x68(0xC)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	uint8                                        Pad_E79[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSoundscapeColorSpawnSettings         SpawnBehavior;                                     // 0x78(0x88)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	uint8                                        Pad_E7B[0x78];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UActiveSoundscapeColorVoice*>   SoundscapeColorVoicePool;                          // 0x178(0x10)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	uint8                                        Pad_E7C[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UActiveSoundscapeColor* GetDefaultObj();

	void UpdateSoundscapeColor();
	void Stop(float* ColorFadeOutTime);
	void Play(float ColorVolume, float ColorPitch, float* ColorFadeInTime);
	void IsPlaying(bool ReturnValue);
};

// 0x8 (0xC0 - 0xB8)
// Class Soundscape.SoundscapeColorPointComponent
class USoundscapeColorPointComponent : public UActorComponent
{
public:
	struct FGameplayTag                          ColorPoint;                                        // 0xB8(0x8)(BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class USoundscapeColorPointComponent* GetDefaultObj();

};

// 0x58 (0x80 - 0x28)
// Class Soundscape.SoundscapePalette
class USoundscapePalette : public UObject
{
public:
	struct FGameplayTagQuery                     SoundscapePalettePlaybackConditions;               // 0x28(0x48)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	TArray<struct FSoundscapePaletteColor>       Colors;                                            // 0x70(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class USoundscapePalette* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class Soundscape.ActiveSoundscapePalette
class UActiveSoundscapePalette : public UObject
{
public:
	class UWorld*                                World;                                             // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance)
	TArray<class UActiveSoundscapeColor*>        ActiveSoundscapeColors;                            // 0x30(0x10)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UActiveSoundscapePalette* GetDefaultObj();

	void Stop();
	void Play();
};

// 0x70 (0xA8 - 0x38)
// Class Soundscape.SoundscapeSettings
class USoundscapeSettings : public UDeveloperSettings
{
public:
	TSet<struct FSoftObjectPath>                 SoundscapePaletteCollection;                       // 0x38(0x50)(ConstParm, EditFixedSize, Transient, Config)
	bool                                         bDebugDraw;                                        // 0x88(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	uint8                                        Pad_E8B[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        LOD1ColorPointHashWidth;                           // 0x8C(0x4)(ExportObject, Net, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	float                                        LOD1ColorPointHashDistance;                        // 0x90(0x4)(ConstParm, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	float                                        LOD2ColorPointHashWidth;                           // 0x94(0x4)(Edit, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	float                                        LOD2ColorPointHashDistance;                        // 0x98(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	float                                        LOD3ColorPointHashWidth;                           // 0x9C(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	float                                        ActiveColorPointHashWidth;                         // 0xA0(0x4)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	float                                        ActiveColorPointHashUpdateTimeSeconds;             // 0xA4(0x4)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class USoundscapeSettings* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class Soundscape.SoundscapeColorPointHashCellDensity
class USoundscapeColorPointHashCellDensity : public UObject
{
public:
	TMap<uint64, int32>                          ColorPointHashCellDensity;                         // 0x28(0x50)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class USoundscapeColorPointHashCellDensity* GetDefaultObj();

};

// 0x98 (0xC0 - 0x28)
// Class Soundscape.SoundscapeColorPointHashMap
class USoundscapeColorPointHashMap : public UObject
{
public:
	TMap<struct FGameplayTag, class USoundscapeColorPointHashCellDensity*> ColorPointHashMap;                                 // 0x28(0x50)(BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	float                                        HashCellSize;                                      // 0x78(0x4)(Edit, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	int32                                        GridWidth;                                         // 0x7C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	int64                                        NumCells;                                          // 0x80(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	float                                        HashCellFactor;                                    // 0x88(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	uint8                                        Pad_EBA[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               GridCenter;                                        // 0x90(0x18)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	struct FVector                               GridOriginOffset;                                  // 0xA8(0x18)(ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class USoundscapeColorPointHashMap* GetDefaultObj();

	void SetGridCenterpoint(struct FVector* Location);
	void NumColorPointsInCell(struct FVector* Location, const struct FGameplayTag& ColorPoint, int32 ReturnValue);
	struct FVector InitializeHash();
	void ClearHash();
	void CalculateHashIndex(struct FVector* Location, uint64 ReturnValue);
	void AddColorPointToHash(struct FVector* Location, const struct FGameplayTag& ColorPoint, bool ReturnValue);
	void AddColorPointArrayToHash(const TArray<struct FVector>& Locations, const struct FGameplayTag& ColorPoint);
};

// 0x30 (0x58 - 0x28)
// Class Soundscape.SoundscapeColorPointHashMapCollection
class USoundscapeColorPointHashMapCollection : public UObject
{
public:
	class USoundscapeColorPointHashMap*          ColorPointHashMapLOD1;                             // 0x28(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class USoundscapeColorPointHashMap*          ColorPointHashMapLOD2;                             // 0x30(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class USoundscapeColorPointHashMap*          ColorPointHashMapLOD3;                             // 0x38(0x8)(ConstParm, Net, Parm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	float                                        LOD1ColorPointHashWidth;                           // 0x40(0x4)(ExportObject, Net, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	float                                        LOD1ColorPointHashDistance;                        // 0x44(0x4)(ConstParm, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	float                                        LOD2ColorPointHashWidth;                           // 0x48(0x4)(Edit, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	float                                        LOD2ColorPointHashDistance;                        // 0x4C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	float                                        LOD3ColorPointHashWidth;                           // 0x50(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	uint8                                        Pad_ECF[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USoundscapeColorPointHashMapCollection* GetDefaultObj();

};

// 0x1E8 (0x218 - 0x30)
// Class Soundscape.SoundscapeSubsystem
class USoundscapeSubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_F02[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	TSet<class USoundscapePalette*>              LoadedPaletteCollectionSet;                        // 0x38(0x50)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	TMap<class FName, struct FSoundscapePaletteCollection> UnloadedPaletteCollections;                        // 0x88(0x50)(Net, OutParm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	uint8                                        Pad_F03[0x20];                                     // Fixing Size After Last Property  > TateDumper <
	TMap<class USoundscapePalette*, class UActiveSoundscapePalette*> ActivePalettes;                                    // 0xF8(0x50)(ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	uint8                                        Pad_F06[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class USoundscapeColorPointHashMapCollection*> ColorPointHashMapCollections;                      // 0x150(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	uint8                                        Pad_F07[0x60];                                     // Fixing Size After Last Property  > TateDumper <
	class USoundscapeColorPointHashMap*          ColorPointHashMapLOD1;                             // 0x1C0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class USoundscapeColorPointHashMap*          ColorPointHashMapLOD2;                             // 0x1C8(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class USoundscapeColorPointHashMap*          ColorPointHashMapLOD3;                             // 0x1D0(0x8)(ConstParm, Net, Parm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class USoundscapeColorPointHashMap*          ActiveColorPointHashMap;                           // 0x1D8(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	uint8                                        Pad_F09[0x38];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USoundscapeSubsystem* GetDefaultObj();

	struct FGameplayTag SetState();
	void RestartSoundscape();
	class FName RemovePaletteCollection(bool ReturnValue);
	class FName RemoveColorPointCollection(bool ReturnValue);
	struct FGameplayTag ClearState();
	void CheckColorPointDensity(struct FVector* Location, const struct FGameplayTag& ColorPoint, int32 ReturnValue);
	struct FSoundscapePaletteCollection AddPaletteCollection(bool ReturnValue);
	class FName AddColorPointCollection(const struct FSoundscapeColorPointCollection& ColorPointCollection);
};

}


