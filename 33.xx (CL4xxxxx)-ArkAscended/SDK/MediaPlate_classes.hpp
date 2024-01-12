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
	uint8                                        Pad_2542[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMediaPlateAssetUserData* GetDefaultObj();

};

// 0xC8 (0x180 - 0xB8)
// Class MediaPlate.MediaPlateComponent
class UMediaPlateComponent : public UActorComponent
{
public:
	uint8                                        Pad_256F[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         bPlayOnOpen;                                       // 0xC0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bAutoPlay;                                         // 0xC1(0x1)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bEnableAudio;                                      // 0xC2(0x1)(ExportObject, Net, Parm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2570[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        StartTime;                                         // 0xC4(0x4)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UMediaSoundComponent*                  SoundComponent;                                    // 0xC8(0x8)(Net, Parm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	class UStaticMeshComponent*                  StaticMeshComponent;                               // 0xD0(0x8)(Edit, BlueprintVisible, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	TArray<class UStaticMeshComponent*>          Letterboxes;                                       // 0xD8(0x10)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	class UMediaPlaylist*                        MediaPlaylist;                                     // 0xE8(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig)
	int32                                        PlaylistIndex;                                     // 0xF0(0x4)(Edit, BlueprintReadOnly, Parm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	struct FMediaSourceCacheSettings             CacheSettings;                                     // 0xF4(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bIsMediaPlatePlaying;                              // 0xFC(0x1)(ConstParm, BlueprintVisible, Parm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2576[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         bPlayOnlyWhenVisible;                              // 0x104(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bLoop;                                             // 0x105(0x1)(BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class EMediaTextureVisibleMipsTiles     VisibleMipsTilesCalculations;                      // 0x106(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2577[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MipMapBias;                                        // 0x108(0x4)(ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bIsAspectRatioAuto;                                // 0x10C(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bEnableMipMapUpscaling;                            // 0x10D(0x1)(BlueprintReadOnly, EditFixedSize, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2579[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        MipLevelToUpscale;                                 // 0x110(0x4)(ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        LetterboxAspectRatio;                              // 0x114(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_257A[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             MeshRange;                                         // 0x120(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	TArray<class UMediaTexture*>                 MediaTextures;                                     // 0x130(0x10)(Edit, BlueprintVisible, ExportObject, Net, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	class UMediaPlayer*                          MediaPlayer;                                       // 0x140(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig)
	uint8                                        Pad_257B[0x38];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMediaPlateComponent* GetDefaultObj();

	bool SetPlayOnlyWhenVisible();
	struct FVector2D SetMeshRange();
	bool SetLoop();
	float SetLetterboxAspectRatio();
	bool SetIsAspectRatioAuto();
	bool Seek(const struct FTimespan& Time);
	bool Rewind();
	void Play();
	void Pause();
	void Open();
	class FString OnMediaOpened();
	void OnMediaEnd();
	bool IsMediaPlatePlaying();
	struct FVector2D GetMeshRange();
	class UMediaTexture* GetMediaTexture();
	class UMediaPlayer* GetMediaPlayer();
	bool GetLoop();
	float GetLetterboxAspectRatio();
	bool GetIsAspectRatioAuto();
	void Close();
};

}


