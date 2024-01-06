#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x4D8 - 0x4C8)
// Class MediaPlate.MediaPlate
class AMediaPlate : public AActor
{
public:
	class UMediaPlateComponent*                  MediaPlateComponent;                               // 0x4C8(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	class UStaticMeshComponent*                  StaticMeshComponent;                               // 0x4D0(0x8)(Edit, BlueprintVisible, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class AMediaPlate* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class MediaPlate.MediaPlateAssetUserData
class UMediaPlateAssetUserData : public UAssetUserData
{
public:
	uint8                                        Pad_1DE9[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMediaPlateAssetUserData* GetDefaultObj();

};

// 0xC8 (0x180 - 0xB8)
// Class MediaPlate.MediaPlateComponent
class UMediaPlateComponent : public UActorComponent
{
public:
	uint8                                        Pad_1E0F[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         bPlayOnOpen;                                       // 0xC0(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bAutoPlay;                                         // 0xC1(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bEnableAudio;                                      // 0xC2(0x1)(Edit, ConstParm, BlueprintReadOnly, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E10[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        StartTime;                                         // 0xC4(0x4)(BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UMediaSoundComponent*                  SoundComponent;                                    // 0xC8(0x8)(Edit, ConstParm, ExportObject, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UStaticMeshComponent*                  StaticMeshComponent;                               // 0xD0(0x8)(Edit, BlueprintVisible, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	TArray<class UStaticMeshComponent*>          Letterboxes;                                       // 0xD8(0x10)(BlueprintVisible, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UMediaPlaylist*                        MediaPlaylist;                                     // 0xE8(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig)
	int32                                        PlaylistIndex;                                     // 0xF0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	struct FMediaSourceCacheSettings             CacheSettings;                                     // 0xF4(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bIsMediaPlatePlaying;                              // 0xFC(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E11[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         bPlayOnlyWhenVisible;                              // 0x104(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bLoop;                                             // 0x105(0x1)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	enum class EMediaTextureVisibleMipsTiles     VisibleMipsTilesCalculations;                      // 0x106(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E15[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MipMapBias;                                        // 0x108(0x4)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bIsAspectRatioAuto;                                // 0x10C(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bEnableMipMapUpscaling;                            // 0x10D(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E16[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        MipLevelToUpscale;                                 // 0x110(0x4)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        LetterboxAspectRatio;                              // 0x114(0x4)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E17[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             MeshRange;                                         // 0x120(0x10)(Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	TArray<class UMediaTexture*>                 MediaTextures;                                     // 0x130(0x10)(ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	class UMediaPlayer*                          MediaPlayer;                                       // 0x140(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig)
	uint8                                        Pad_1E18[0x38];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMediaPlateComponent* GetDefaultObj();

	bool SetPlayOnlyWhenVisible();
	struct FVector2D SetMeshRange();
	bool SetLoop();
	void SetLetterboxAspectRatio(float* AspectRatio);
	bool SetIsAspectRatioAuto();
	struct FTimespan Seek(bool* ReturnValue);
	void Rewind(bool* ReturnValue);
	void Play();
	void Pause();
	void Open();
	class FString OnMediaOpened();
	void OnMediaEnd();
	void IsMediaPlatePlaying(bool* ReturnValue);
	void GetMeshRange(struct FVector2D* ReturnValue);
	int32 GetMediaTexture(class UMediaTexture** ReturnValue);
	void GetMediaPlayer(class UMediaPlayer** ReturnValue);
	void GetLoop(bool* ReturnValue);
	void GetLetterboxAspectRatio(float* ReturnValue);
	void GetIsAspectRatioAuto(bool* ReturnValue);
	void Close();
};

}


