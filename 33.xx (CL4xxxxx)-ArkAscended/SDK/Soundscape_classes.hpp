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

	class UActiveSoundscapePalette* SpawnSoundscapePalette(bool* ReturnValue);
	class UActiveSoundscapeColor* SpawnSoundscapeColor(bool* ReturnValue);
};

// 0xD8 (0x100 - 0x28)
// Class Soundscape.SoundscapeColor
class USoundscapeColor : public UObject
{
public:
	class USoundBase*                            Sound;                                             // 0x28(0x8)(Edit, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        VolumeBase;                                        // 0x30(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	float                                        PitchBase;                                         // 0x34(0x4)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FSoundscapeColorModulationSettings    ModulationBehavior;                                // 0x38(0x30)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FSoundscapeColorPlaybackSettings      PlaybackBehavior;                                  // 0x68(0xC)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_46D[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSoundscapeColorSpawnSettings         SpawnBehavior;                                     // 0x78(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

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
	bool                                         bFree;                                             // 0x38(0x1)(Edit, Net, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_470[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UActiveSoundscapeColorVoice* GetDefaultObj();

	float StopLimitedDurationVoice();
};

// 0x168 (0x190 - 0x28)
// Class Soundscape.ActiveSoundscapeColor
class UActiveSoundscapeColor : public UObject
{
public:
	class USoundBase*                            Sound;                                             // 0x28(0x8)(Edit, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_478[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSoundscapeColorModulationSettings    ModulationBehavior;                                // 0x38(0x30)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FSoundscapeColorPlaybackSettings      PlaybackBehavior;                                  // 0x68(0xC)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_479[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSoundscapeColorSpawnSettings         SpawnBehavior;                                     // 0x78(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_47A[0x78];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UActiveSoundscapeColorVoice*>   SoundscapeColorVoicePool;                          // 0x178(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_47B[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UActiveSoundscapeColor* GetDefaultObj();

	void UpdateSoundscapeColor();
	float Stop();
	float Play(float* ColorVolume, float* ColorPitch);
	void IsPlaying(bool* ReturnValue);
};

// 0x8 (0xC0 - 0xB8)
// Class Soundscape.SoundscapeColorPointComponent
class USoundscapeColorPointComponent : public UActorComponent
{
public:
	struct FGameplayTag                          ColorPoint;                                        // 0xB8(0x8)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class USoundscapeColorPointComponent* GetDefaultObj();

};

// 0x58 (0x80 - 0x28)
// Class Soundscape.SoundscapePalette
class USoundscapePalette : public UObject
{
public:
	struct FGameplayTagQuery                     SoundscapePalettePlaybackConditions;               // 0x28(0x48)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FSoundscapePaletteColor>       Colors;                                            // 0x70(0x10)(Edit, Parm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class USoundscapePalette* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class Soundscape.ActiveSoundscapePalette
class UActiveSoundscapePalette : public UObject
{
public:
	class UWorld*                                World;                                             // 0x28(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	TArray<class UActiveSoundscapeColor*>        ActiveSoundscapeColors;                            // 0x30(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

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
	bool                                         bDebugDraw;                                        // 0x88(0x1)(Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_486[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        LOD1ColorPointHashWidth;                           // 0x8C(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	float                                        LOD1ColorPointHashDistance;                        // 0x90(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	float                                        LOD2ColorPointHashWidth;                           // 0x94(0x4)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	float                                        LOD2ColorPointHashDistance;                        // 0x98(0x4)(ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	float                                        LOD3ColorPointHashWidth;                           // 0x9C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	float                                        ActiveColorPointHashWidth;                         // 0xA0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	float                                        ActiveColorPointHashUpdateTimeSeconds;             // 0xA4(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class USoundscapeSettings* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class Soundscape.SoundscapeColorPointHashCellDensity
class USoundscapeColorPointHashCellDensity : public UObject
{
public:
	TMap<uint64, int32>                          ColorPointHashCellDensity;                         // 0x28(0x50)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class USoundscapeColorPointHashCellDensity* GetDefaultObj();

};

// 0x98 (0xC0 - 0x28)
// Class Soundscape.SoundscapeColorPointHashMap
class USoundscapeColorPointHashMap : public UObject
{
public:
	TMap<struct FGameplayTag, class USoundscapeColorPointHashCellDensity*> ColorPointHashMap;                                 // 0x28(0x50)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditConst, InstancedReference, SubobjectReference)
	float                                        HashCellSize;                                      // 0x78(0x4)(BlueprintReadOnly, Net, EditConst, InstancedReference, SubobjectReference)
	int32                                        GridWidth;                                         // 0x7C(0x4)(ConstParm, ExportObject, Net, EditConst, InstancedReference, SubobjectReference)
	int64                                        NumCells;                                          // 0x80(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        HashCellFactor;                                    // 0x88(0x4)(ConstParm, Net, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_497[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               GridCenter;                                        // 0x90(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               GridOriginOffset;                                  // 0xA8(0x18)(Edit, ConstParm, BlueprintReadOnly, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class USoundscapeColorPointHashMap* GetDefaultObj();

	void SetGridCenterpoint(struct FVector* Location);
	struct FGameplayTag NumColorPointsInCell(struct FVector* Location, int32* ReturnValue);
	void InitializeHash(float HashCellSizeIn, const struct FVector& GridCenterIn);
	void ClearHash();
	void CalculateHashIndex(struct FVector* Location, uint64* ReturnValue);
	struct FGameplayTag AddColorPointToHash(struct FVector* Location, bool* ReturnValue);
	struct FGameplayTag AddColorPointArrayToHash(TArray<struct FVector>* Locations);
};

// 0x30 (0x58 - 0x28)
// Class Soundscape.SoundscapeColorPointHashMapCollection
class USoundscapeColorPointHashMapCollection : public UObject
{
public:
	class USoundscapeColorPointHashMap*          ColorPointHashMapLOD1;                             // 0x28(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, EditConst, InstancedReference, SubobjectReference)
	class USoundscapeColorPointHashMap*          ColorPointHashMapLOD2;                             // 0x30(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, EditConst, InstancedReference, SubobjectReference)
	class USoundscapeColorPointHashMap*          ColorPointHashMapLOD3;                             // 0x38(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, EditConst, InstancedReference, SubobjectReference)
	float                                        LOD1ColorPointHashWidth;                           // 0x40(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	float                                        LOD1ColorPointHashDistance;                        // 0x44(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	float                                        LOD2ColorPointHashWidth;                           // 0x48(0x4)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	float                                        LOD2ColorPointHashDistance;                        // 0x4C(0x4)(ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	float                                        LOD3ColorPointHashWidth;                           // 0x50(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_49B[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USoundscapeColorPointHashMapCollection* GetDefaultObj();

};

// 0x1E8 (0x218 - 0x30)
// Class Soundscape.SoundscapeSubsystem
class USoundscapeSubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_4B5[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	TSet<class USoundscapePalette*>              LoadedPaletteCollectionSet;                        // 0x38(0x50)(Edit, ExportObject, Net, EditFixedSize, Parm, EditConst, InstancedReference, SubobjectReference)
	TMap<class FName, struct FSoundscapePaletteCollection> UnloadedPaletteCollections;                        // 0x88(0x50)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_4B6[0x20];                                     // Fixing Size After Last Property  > TateDumper <
	TMap<class USoundscapePalette*, class UActiveSoundscapePalette*> ActivePalettes;                                    // 0xF8(0x50)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_4B7[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class USoundscapeColorPointHashMapCollection*> ColorPointHashMapCollections;                      // 0x150(0x10)(ConstParm, ExportObject, Net, Parm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_4B8[0x60];                                     // Fixing Size After Last Property  > TateDumper <
	class USoundscapeColorPointHashMap*          ColorPointHashMapLOD1;                             // 0x1C0(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, EditConst, InstancedReference, SubobjectReference)
	class USoundscapeColorPointHashMap*          ColorPointHashMapLOD2;                             // 0x1C8(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, EditConst, InstancedReference, SubobjectReference)
	class USoundscapeColorPointHashMap*          ColorPointHashMapLOD3;                             // 0x1D0(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, EditConst, InstancedReference, SubobjectReference)
	class USoundscapeColorPointHashMap*          ActiveColorPointHashMap;                           // 0x1D8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_4B9[0x38];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USoundscapeSubsystem* GetDefaultObj();

	void SetState(const struct FGameplayTag& SoundscapeState);
	void RestartSoundscape();
	void RemovePaletteCollection(class FName PaletteCollectionName, bool* ReturnValue);
	void RemoveColorPointCollection(class FName ColorPointCollectionName, bool* ReturnValue);
	void ClearState(const struct FGameplayTag& SoundscapeState);
	struct FGameplayTag CheckColorPointDensity(struct FVector* Location, int32* ReturnValue);
	void AddPaletteCollection(class FName PaletteCollectionName, const struct FSoundscapePaletteCollection& PaletteCollection, bool* ReturnValue);
	void AddColorPointCollection(class FName ColorPointCollectionName, struct FSoundscapeColorPointCollection* ColorPointCollection);
};

}


