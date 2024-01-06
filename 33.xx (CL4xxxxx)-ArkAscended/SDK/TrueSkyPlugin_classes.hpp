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

// 0x70 (0x538 - 0x4C8)
// Class TrueSkyPlugin.TrueSkySequenceActor
class ATrueSkySequenceActor : public ATrueSkyActorParent
{
public:
	TArray<class UTrueSkySequenceAsset*>         ActiveSequences;                                   // 0x4C8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<float>                                BlendWeights;                                      // 0x4D8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UTexture2D*                            MoonTexture;                                       // 0x4E8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTexture2D*                            CosmicBackgroundTexture;                           // 0x4F0(0x8)(BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTextureRenderTarget2D*                External_ScatterRT;                                // 0x4F8(0x8)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTextureRenderTarget2D*                External_LossRT;                                   // 0x500(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        Brightness;                                        // 0x508(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance)
	float                                        MetresPerUnit;                                     // 0x50C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        MinSimpleCloudShadowing;                           // 0x510(0x4)(ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        MaxSimpleCloudShadowing;                           // 0x514(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        MinSimpleCloudShadowingDistance;                   // 0x518(0x4)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        MaxSimpleCloudShadowingDistance;                   // 0x51C(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        SimpleCloudShadowSharpness;                        // 0x520(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2D8[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	bool                                         Visible;                                           // 0x528(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, EditConst)
	uint8                                        Pad_2D9[0xF];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ATrueSkySequenceActor* GetDefaultObj();

	void SetTime(float Value);
	struct FVector SetPointLightSource(int32* ID, struct FLinearColor* LightColour, float* Intensity, float* MinRadius, float* MaxRadius);
	void SetPointLight(class APointLight* Source);
	void SetKeyframeInt(int32* KeyframeUid, class FString* Name, int32 Value);
	void SetKeyframeFloat(int32* KeyframeUid, class FString* Name, float Value);
	void SetInt(class FString* Name, int32 Value);
	void SetFloat(class FString* Name, float Value);
	void GetSunRotation(struct FRotator* ReturnValue);
	void GetSunColor(struct FLinearColor* ReturnValue);
	void GetNextModifiableSkyKeyframe(int32* ReturnValue);
	int32 GetNextModifiableCloudKeyframe(int32* ReturnValue);
	void GetKeyframeInt(int32* KeyframeUid, class FString* Name, int32* ReturnValue);
	void GetKeyframeFloat(int32* KeyframeUid, class FString* Name, float* ReturnValue);
	void GetInt(class FString* Name, int32* ReturnValue);
	void GetFloat(class FString* Name, float* ReturnValue);
	void ForceUpdate();
	struct FVector CloudPointTest(float* ReturnValue);
	struct FVector CloudLineTest(struct FVector* StartPos, float* ReturnValue);
};

// 0x10 (0x38 - 0x28)
// Class TrueSkyPlugin.TrueSkySequenceAsset
class UTrueSkySequenceAsset : public UObject
{
public:
	TArray<uint8>                                SequenceText;                                      // 0x28(0x10)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UTrueSkySequenceAsset* GetDefaultObj();

};

}

