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

	bool SpawnSoundscapePalette(class USoundscapePalette** SoundscapePaletteIn, class UActiveSoundscapePalette** SoundscapePaletteAgentsOut);
	bool SpawnSoundscapeColor(class USoundscapeColor** SoundscapeColorIn);
};

// 0xD8 (0x100 - 0x28)
// Class Soundscape.SoundscapeColor
class USoundscapeColor : public UObject
{
public:
	class USoundBase*                            Sound;                                             // 0x28(0x8)(Edit, ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        VolumeBase;                                        // 0x30(0x4)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	float                                        PitchBase;                                         // 0x34(0x4)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	struct FSoundscapeColorModulationSettings    ModulationBehavior;                                // 0x38(0x30)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	struct FSoundscapeColorPlaybackSettings      PlaybackBehavior;                                  // 0x68(0xC)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_650[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSoundscapeColorSpawnSettings         SpawnBehavior;                                     // 0x78(0x88)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class USoundscapeColor* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class Soundscape.ActiveSoundscapeColorVoice
class UActiveSoundscapeColorVoice : public UObject
{
public:
	class UAudioComponent*                       AudioComponent;                                    // 0x28(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig)
	struct FTimerHandle                          TimerHandle;                                       // 0x30(0x8)(ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, EditConst)
	bool                                         bFree;                                             // 0x38(0x1)(ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	uint8                                        Pad_652[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UActiveSoundscapeColorVoice* GetDefaultObj();

	void StopLimitedDurationVoice(float FadeOutTime);
};

// 0x168 (0x190 - 0x28)
// Class Soundscape.ActiveSoundscapeColor
class UActiveSoundscapeColor : public UObject
{
public:
	class USoundBase*                            Sound;                                             // 0x28(0x8)(Edit, ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_65B[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSoundscapeColorModulationSettings    ModulationBehavior;                                // 0x38(0x30)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	struct FSoundscapeColorPlaybackSettings      PlaybackBehavior;                                  // 0x68(0xC)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_65C[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSoundscapeColorSpawnSettings         SpawnBehavior;                                     // 0x78(0x88)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_65D[0x78];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UActiveSoundscapeColorVoice*>   SoundscapeColorVoicePool;                          // 0x178(0x10)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_65E[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UActiveSoundscapeColor* GetDefaultObj();

	void UpdateSoundscapeColor();
	void Stop(float* ColorFadeOutTime);
	float Play(float* ColorFadeInTime);
	bool IsPlaying();
};

// 0x8 (0xC0 - 0xB8)
// Class Soundscape.SoundscapeColorPointComponent
class USoundscapeColorPointComponent : public UActorComponent
{
public:
	struct FGameplayTag                          ColorPoint;                                        // 0xB8(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class USoundscapeColorPointComponent* GetDefaultObj();

};

// 0x58 (0x80 - 0x28)
// Class Soundscape.SoundscapePalette
class USoundscapePalette : public UObject
{
public:
	struct FGameplayTagQuery                     SoundscapePalettePlaybackConditions;               // 0x28(0x48)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FSoundscapePaletteColor>       Colors;                                            // 0x70(0x10)(ConstParm, Parm, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class USoundscapePalette* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class Soundscape.ActiveSoundscapePalette
class UActiveSoundscapePalette : public UObject
{
public:
	class UWorld*                                World;                                             // 0x28(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	TArray<class UActiveSoundscapeColor*>        ActiveSoundscapeColors;                            // 0x30(0x10)(BlueprintVisible, ReturnParm, EditConst, InstancedReference, SubobjectReference)

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
	TSet<struct FSoftObjectPath>                 SoundscapePaletteCollection;                       // 0x38(0x50)(ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config)
	bool                                         bDebugDraw;                                        // 0x88(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_661[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        LOD1ColorPointHashWidth;                           // 0x8C(0x4)(ExportObject, Net, EditFixedSize, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	float                                        LOD1ColorPointHashDistance;                        // 0x90(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	float                                        LOD2ColorPointHashWidth;                           // 0x94(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	float                                        LOD2ColorPointHashDistance;                        // 0x98(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	float                                        LOD3ColorPointHashWidth;                           // 0x9C(0x4)(ConstParm, BlueprintReadOnly, Net, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	float                                        ActiveColorPointHashWidth;                         // 0xA0(0x4)(BlueprintVisible, Net, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	float                                        ActiveColorPointHashUpdateTimeSeconds;             // 0xA4(0x4)(BlueprintReadOnly, ReturnParm, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class USoundscapeSettings* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class Soundscape.SoundscapeColorPointHashCellDensity
class USoundscapeColorPointHashCellDensity : public UObject
{
public:
	TMap<uint64, int32>                          ColorPointHashCellDensity;                         // 0x28(0x50)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class USoundscapeColorPointHashCellDensity* GetDefaultObj();

};

// 0x98 (0xC0 - 0x28)
// Class Soundscape.SoundscapeColorPointHashMap
class USoundscapeColorPointHashMap : public UObject
{
public:
	TMap<struct FGameplayTag, class USoundscapeColorPointHashCellDensity*> ColorPointHashMap;                                 // 0x28(0x50)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	float                                        HashCellSize;                                      // 0x78(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	int32                                        GridWidth;                                         // 0x7C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	int64                                        NumCells;                                          // 0x80(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        HashCellFactor;                                    // 0x88(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_668[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               GridCenter;                                        // 0x90(0x18)(Edit, BlueprintReadOnly, Net, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               GridOriginOffset;                                  // 0xA8(0x18)(ExportObject, Net, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class USoundscapeColorPointHashMap* GetDefaultObj();

	void SetGridCenterpoint(struct FVector* Location);
	int32 NumColorPointsInCell(struct FVector* Location, struct FGameplayTag* ColorPoint);
	struct FVector InitializeHash();
	void ClearHash();
	uint64 CalculateHashIndex(struct FVector* Location);
	bool AddColorPointToHash(struct FVector* Location, struct FGameplayTag* ColorPoint);
	TArray<struct FVector> AddColorPointArrayToHash(struct FGameplayTag* ColorPoint);
};

// 0x30 (0x58 - 0x28)
// Class Soundscape.SoundscapeColorPointHashMapCollection
class USoundscapeColorPointHashMapCollection : public UObject
{
public:
	class USoundscapeColorPointHashMap*          ColorPointHashMapLOD1;                             // 0x28(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class USoundscapeColorPointHashMap*          ColorPointHashMapLOD2;                             // 0x30(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class USoundscapeColorPointHashMap*          ColorPointHashMapLOD3;                             // 0x38(0x8)(ConstParm, Net, EditFixedSize, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	float                                        LOD1ColorPointHashWidth;                           // 0x40(0x4)(ExportObject, Net, EditFixedSize, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	float                                        LOD1ColorPointHashDistance;                        // 0x44(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	float                                        LOD2ColorPointHashWidth;                           // 0x48(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	float                                        LOD2ColorPointHashDistance;                        // 0x4C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	float                                        LOD3ColorPointHashWidth;                           // 0x50(0x4)(ConstParm, BlueprintReadOnly, Net, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_66A[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USoundscapeColorPointHashMapCollection* GetDefaultObj();

};

// 0x1E8 (0x218 - 0x30)
// Class Soundscape.SoundscapeSubsystem
class USoundscapeSubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_67E[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	TSet<class USoundscapePalette*>              LoadedPaletteCollectionSet;                        // 0x38(0x50)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	TMap<class FName, struct FSoundscapePaletteCollection> UnloadedPaletteCollections;                        // 0x88(0x50)(Net, EditFixedSize, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_680[0x20];                                     // Fixing Size After Last Property  > TateDumper <
	TMap<class USoundscapePalette*, class UActiveSoundscapePalette*> ActivePalettes;                                    // 0xF8(0x50)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_681[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class USoundscapeColorPointHashMapCollection*> ColorPointHashMapCollections;                      // 0x150(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_682[0x60];                                     // Fixing Size After Last Property  > TateDumper <
	class USoundscapeColorPointHashMap*          ColorPointHashMapLOD1;                             // 0x1C0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class USoundscapeColorPointHashMap*          ColorPointHashMapLOD2;                             // 0x1C8(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class USoundscapeColorPointHashMap*          ColorPointHashMapLOD3;                             // 0x1D0(0x8)(ConstParm, Net, EditFixedSize, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class USoundscapeColorPointHashMap*          ActiveColorPointHashMap;                           // 0x1D8(0x8)(ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_684[0x38];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USoundscapeSubsystem* GetDefaultObj();

	struct FGameplayTag SetState();
	void RestartSoundscape();
	bool RemovePaletteCollection();
	bool RemoveColorPointCollection();
	struct FGameplayTag ClearState();
	int32 CheckColorPointDensity(struct FVector* Location, struct FGameplayTag* ColorPoint);
	bool AddPaletteCollection();
	struct FSoundscapeColorPointCollection AddColorPointCollection();
};

}


