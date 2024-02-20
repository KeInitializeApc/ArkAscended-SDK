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
	class UMediaPlateComponent*                  MediaPlateComponent;                               // 0x4C8(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class UStaticMeshComponent*                  StaticMeshComponent;                               // 0x4D0(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class AMediaPlate* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class MediaPlate.MediaPlateAssetUserData
class UMediaPlateAssetUserData : public UAssetUserData
{
public:
	uint8                                        Pad_60B[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMediaPlateAssetUserData* GetDefaultObj();

};

// 0xC8 (0x180 - 0xB8)
// Class MediaPlate.MediaPlateComponent
class UMediaPlateComponent : public UActorComponent
{
public:
	uint8                                        Pad_656[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	bool                                         bPlayOnOpen;                                       // 0xC0(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bAutoPlay;                                         // 0xC1(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	bool                                         bEnableAudio;                                      // 0xC2(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_65A[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        StartTime;                                         // 0xC4(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UMediaSoundComponent*                  SoundComponent;                                    // 0xC8(0x8)(Edit, ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UStaticMeshComponent*                  StaticMeshComponent;                               // 0xD0(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	TArray<class UStaticMeshComponent*>          Letterboxes;                                       // 0xD8(0x10)(BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UMediaPlaylist*                        MediaPlaylist;                                     // 0xE8(0x8)(Edit, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	int32                                        PlaylistIndex;                                     // 0xF0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FMediaSourceCacheSettings             CacheSettings;                                     // 0xF4(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bIsMediaPlatePlaying;                              // 0xFC(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_660[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	bool                                         bPlayOnlyWhenVisible;                              // 0x104(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bLoop;                                             // 0x105(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EMediaTextureVisibleMipsTiles     VisibleMipsTilesCalculations;                      // 0x106(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_663[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        MipMapBias;                                        // 0x108(0x4)(Edit, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bIsAspectRatioAuto;                                // 0x10C(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bEnableMipMapUpscaling;                            // 0x10D(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_669[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        MipLevelToUpscale;                                 // 0x110(0x4)(Edit, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        LetterboxAspectRatio;                              // 0x114(0x4)(ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_66D[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             MeshRange;                                         // 0x120(0x10)(Net, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<class UMediaTexture*>                 MediaTextures;                                     // 0x130(0x10)(ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UMediaPlayer*                          MediaPlayer;                                       // 0x140(0x8)(Edit, ConstParm, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference)
	uint8                                        Pad_66F[0x38];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMediaPlateComponent* GetDefaultObj();

	bool SetPlayOnlyWhenVisible();
	struct FVector2D SetMeshRange();
	bool SetLoop();
	void SetLetterboxAspectRatio(float* AspectRatio);
	void SetIsAspectRatioAuto(bool* bInIsAspectRatioAuto);
	struct FTimespan Seek(bool ReturnValue);
	void Rewind(bool ReturnValue);
	void Play();
	void Pause();
	void Open();
	void OnMediaOpened(class FString* DeviceUrl);
	void OnMediaEnd();
	void IsMediaPlatePlaying(bool ReturnValue);
	void GetMeshRange(const struct FVector2D& ReturnValue);
	void GetMediaTexture(int32* Index, class UMediaTexture* ReturnValue);
	void GetMediaPlayer(class UMediaPlayer* ReturnValue);
	void GetLoop(bool ReturnValue);
	void GetLetterboxAspectRatio(float ReturnValue);
	void GetIsAspectRatioAuto(bool ReturnValue);
	void Close();
};

}


