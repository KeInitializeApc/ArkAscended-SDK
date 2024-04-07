#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xB8 - 0xB8)
// Class TrueSkyPlugin.TrueSkyComponent
class UTrueSkyComponent : public UActorComponent
{
public:

	static class UClass* StaticClass();
	static class UTrueSkyComponent* GetDefaultObj();

};

// 0x70 (0x530 - 0x4C0)
// Class TrueSkyPlugin.TrueSkySequenceActor
class ATrueSkySequenceActor : public ATrueSkyActorParent
{
public:
	TArray<class UTrueSkySequenceAsset*>         ActiveSequences;                                   // 0x4C0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<float>                                BlendWeights;                                      // 0x4D0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2D*                            MoonTexture;                                       // 0x4E0(0x8)(ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
	class UTexture2D*                            CosmicBackgroundTexture;                           // 0x4E8(0x8)(Edit, ConstParm, ExportObject, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
	class UTextureRenderTarget2D*                External_ScatterRT;                                // 0x4F0(0x8)(Edit, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
	class UTextureRenderTarget2D*                External_LossRT;                                   // 0x4F8(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        Brightness;                                        // 0x500(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance)
	float                                        MetresPerUnit;                                     // 0x504(0x4)(BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        MinSimpleCloudShadowing;                           // 0x508(0x4)(Edit, ConstParm, Net, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        MaxSimpleCloudShadowing;                           // 0x50C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        MinSimpleCloudShadowingDistance;                   // 0x510(0x4)(Edit, BlueprintVisible, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        MaxSimpleCloudShadowingDistance;                   // 0x514(0x4)(BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        SimpleCloudShadowSharpness;                        // 0x518(0x4)(ConstParm, BlueprintVisible, Net, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_382[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	bool                                         Visible;                                           // 0x520(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_383[0xF];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ATrueSkySequenceActor* GetDefaultObj();

	void SetTime(float* Value);
	float SetPointLightSource(int32* ID, float Intensity, const struct FVector& Pos, float* MinRadius);
	class APointLight* SetPointLight();
	int32 SetKeyframeInt(class FString* Name, int32* Value);
	int32 SetKeyframeFloat(class FString* Name, float* Value);
	void SetInt(class FString* Name, int32* Value);
	void SetFloat(class FString* Name, float* Value);
	struct FRotator GetSunRotation();
	struct FLinearColor GetSunColor();
	int32 GetNextModifiableSkyKeyframe();
	int32 GetNextModifiableCloudKeyframe();
	int32 GetKeyframeInt(class FString* Name);
	float GetKeyframeFloat(class FString* Name);
	int32 GetInt(class FString* Name);
	float GetFloat(class FString* Name);
	void ForceUpdate();
	float CloudPointTest(int32 QueryID, const struct FVector& Pos);
	float CloudLineTest(int32 QueryID);
};

// 0x10 (0x38 - 0x28)
// Class TrueSkyPlugin.TrueSkySequenceAsset
class UTrueSkySequenceAsset : public UObject
{
public:
	TArray<uint8>                                SequenceText;                                      // 0x28(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UTrueSkySequenceAsset* GetDefaultObj();

};

}


