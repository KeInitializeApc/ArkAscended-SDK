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

	class UActiveSoundscapePalette* SpawnSoundscapePalette(class UObject* WorldContextObject, bool ReturnValue);
	class UActiveSoundscapeColor* SpawnSoundscapeColor(class UObject* WorldContextObject, bool ReturnValue);
};

// 0xD8 (0x100 - 0x28)
// Class Soundscape.SoundscapeColor
class USoundscapeColor : public UObject
{
public:
	class USoundBase*                            Sound;                                             // 0x28(0x8)(ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	float                                        VolumeBase;                                        // 0x30(0x4)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        PitchBase;                                         // 0x34(0x4)(BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FSoundscapeColorModulationSettings    ModulationBehavior;                                // 0x38(0x30)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FSoundscapeColorPlaybackSettings      PlaybackBehavior;                                  // 0x68(0xC)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_553[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSoundscapeColorSpawnSettings         SpawnBehavior;                                     // 0x78(0x88)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class USoundscapeColor* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class Soundscape.ActiveSoundscapeColorVoice
class UActiveSoundscapeColorVoice : public UObject
{
public:
	class UAudioComponent*                       AudioComponent;                                    // 0x28(0x8)(ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	struct FTimerHandle                          TimerHandle;                                       // 0x30(0x8)(ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, EditConst)
	bool                                         bFree;                                             // 0x38(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_555[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UActiveSoundscapeColorVoice* GetDefaultObj();

	float StopLimitedDurationVoice();
};

// 0x168 (0x190 - 0x28)
// Class Soundscape.ActiveSoundscapeColor
class UActiveSoundscapeColor : public UObject
{
public:
	class USoundBase*                            Sound;                                             // 0x28(0x8)(ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	uint8                                        Pad_55A[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSoundscapeColorModulationSettings    ModulationBehavior;                                // 0x38(0x30)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FSoundscapeColorPlaybackSettings      PlaybackBehavior;                                  // 0x68(0xC)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_55B[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSoundscapeColorSpawnSettings         SpawnBehavior;                                     // 0x78(0x88)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_55C[0x78];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UActiveSoundscapeColorVoice*>   SoundscapeColorVoicePool;                          // 0x178(0x10)(ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_55D[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UActiveSoundscapeColor* GetDefaultObj();

	void UpdateSoundscapeColor();
	float Stop();
	float Play(float* ColorVolume, float* ColorPitch);
	void IsPlaying(bool ReturnValue);
};

// 0x8 (0xC0 - 0xB8)
// Class Soundscape.SoundscapeColorPointComponent
class USoundscapeColorPointComponent : public UActorComponent
{
public:
	struct FGameplayTag                          ColorPoint;                                        // 0xB8(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class USoundscapeColorPointComponent* GetDefaultObj();

};

// 0x58 (0x80 - 0x28)
// Class Soundscape.SoundscapePalette
class USoundscapePalette : public UObject
{
public:
	struct FGameplayTagQuery                     SoundscapePalettePlaybackConditions;               // 0x28(0x48)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FSoundscapePaletteColor>       Colors;                                            // 0x70(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class USoundscapePalette* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class Soundscape.ActiveSoundscapePalette
class UActiveSoundscapePalette : public UObject
{
public:
	class UWorld*                                World;                                             // 0x28(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	TArray<class UActiveSoundscapeColor*>        ActiveSoundscapeColors;                            // 0x30(0x10)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
	bool                                         bDebugDraw;                                        // 0x88(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_55E[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        LOD1ColorPointHashWidth;                           // 0x8C(0x4)(ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        LOD1ColorPointHashDistance;                        // 0x90(0x4)(ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        LOD2ColorPointHashWidth;                           // 0x94(0x4)(Edit, ConstParm, ExportObject, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        LOD2ColorPointHashDistance;                        // 0x98(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        LOD3ColorPointHashWidth;                           // 0x9C(0x4)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        ActiveColorPointHashWidth;                         // 0xA0(0x4)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        ActiveColorPointHashUpdateTimeSeconds;             // 0xA4(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class USoundscapeSettings* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class Soundscape.SoundscapeColorPointHashCellDensity
class USoundscapeColorPointHashCellDensity : public UObject
{
public:
	TMap<uint64, int32>                          ColorPointHashCellDensity;                         // 0x28(0x50)(Edit, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class USoundscapeColorPointHashCellDensity* GetDefaultObj();

};

// 0x98 (0xC0 - 0x28)
// Class Soundscape.SoundscapeColorPointHashMap
class USoundscapeColorPointHashMap : public UObject
{
public:
	TMap<struct FGameplayTag, class USoundscapeColorPointHashCellDensity*> ColorPointHashMap;                                 // 0x28(0x50)(ConstParm, ExportObject, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        HashCellSize;                                      // 0x78(0x4)(Edit, ConstParm, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        GridWidth;                                         // 0x7C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int64                                        NumCells;                                          // 0x80(0x8)(Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        HashCellFactor;                                    // 0x88(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_58C[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               GridCenter;                                        // 0x90(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               GridOriginOffset;                                  // 0xA8(0x18)(ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class USoundscapeColorPointHashMap* GetDefaultObj();

	void SetGridCenterpoint(struct FVector* Location);
	struct FGameplayTag NumColorPointsInCell(struct FVector* Location, int32 ReturnValue);
	void InitializeHash(float HashCellSizeIn, const struct FVector& GridCenterIn);
	void ClearHash();
	void CalculateHashIndex(struct FVector* Location, uint64 ReturnValue);
	struct FGameplayTag AddColorPointToHash(struct FVector* Location, bool ReturnValue);
	struct FGameplayTag AddColorPointArrayToHash(TArray<struct FVector>* Locations);
};

// 0x30 (0x58 - 0x28)
// Class Soundscape.SoundscapeColorPointHashMapCollection
class USoundscapeColorPointHashMapCollection : public UObject
{
public:
	class USoundscapeColorPointHashMap*          ColorPointHashMapLOD1;                             // 0x28(0x8)(ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class USoundscapeColorPointHashMap*          ColorPointHashMapLOD2;                             // 0x30(0x8)(BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class USoundscapeColorPointHashMap*          ColorPointHashMapLOD3;                             // 0x38(0x8)(Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        LOD1ColorPointHashWidth;                           // 0x40(0x4)(ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        LOD1ColorPointHashDistance;                        // 0x44(0x4)(ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        LOD2ColorPointHashWidth;                           // 0x48(0x4)(Edit, ConstParm, ExportObject, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        LOD2ColorPointHashDistance;                        // 0x4C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        LOD3ColorPointHashWidth;                           // 0x50(0x4)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_590[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USoundscapeColorPointHashMapCollection* GetDefaultObj();

};

// 0x1E8 (0x218 - 0x30)
// Class Soundscape.SoundscapeSubsystem
class USoundscapeSubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_59D[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	TSet<class USoundscapePalette*>              LoadedPaletteCollectionSet;                        // 0x38(0x50)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TMap<class FName, struct FSoundscapePaletteCollection> UnloadedPaletteCollections;                        // 0x88(0x50)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_59E[0x20];                                     // Fixing Size After Last Property  > TateDumper <
	TMap<class USoundscapePalette*, class UActiveSoundscapePalette*> ActivePalettes;                                    // 0xF8(0x50)(BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_59F[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class USoundscapeColorPointHashMapCollection*> ColorPointHashMapCollections;                      // 0x150(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_5A0[0x60];                                     // Fixing Size After Last Property  > TateDumper <
	class USoundscapeColorPointHashMap*          ColorPointHashMapLOD1;                             // 0x1C0(0x8)(ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class USoundscapeColorPointHashMap*          ColorPointHashMapLOD2;                             // 0x1C8(0x8)(BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class USoundscapeColorPointHashMap*          ColorPointHashMapLOD3;                             // 0x1D0(0x8)(Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class USoundscapeColorPointHashMap*          ActiveColorPointHashMap;                           // 0x1D8(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_5A1[0x38];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USoundscapeSubsystem* GetDefaultObj();

	void SetState(const struct FGameplayTag& SoundscapeState);
	void RestartSoundscape();
	void RemovePaletteCollection(class FName PaletteCollectionName, bool ReturnValue);
	void RemoveColorPointCollection(class FName ColorPointCollectionName, bool ReturnValue);
	void ClearState(const struct FGameplayTag& SoundscapeState);
	struct FGameplayTag CheckColorPointDensity(struct FVector* Location, int32 ReturnValue);
	void AddPaletteCollection(class FName PaletteCollectionName, const struct FSoundscapePaletteCollection& PaletteCollection, bool ReturnValue);
	void AddColorPointCollection(class FName ColorPointCollectionName, struct FSoundscapeColorPointCollection* ColorPointCollection);
};

}


