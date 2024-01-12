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
	TArray<class UTrueSkySequenceAsset*>         ActiveSequences;                                   // 0x4C8(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<float>                                BlendWeights;                                      // 0x4D8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	class UTexture2D*                            MoonTexture;                                       // 0x4E8(0x8)(Edit, ExportObject, EditFixedSize, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTexture2D*                            CosmicBackgroundTexture;                           // 0x4F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTextureRenderTarget2D*                External_ScatterRT;                                // 0x4F8(0x8)(ConstParm, BlueprintReadOnly, Net, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTextureRenderTarget2D*                External_LossRT;                                   // 0x500(0x8)(Edit, ExportObject, Net, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        Brightness;                                        // 0x508(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance)
	float                                        MetresPerUnit;                                     // 0x50C(0x4)(Edit, Net, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        MinSimpleCloudShadowing;                           // 0x510(0x4)(BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        MaxSimpleCloudShadowing;                           // 0x514(0x4)(Edit, ConstParm, BlueprintVisible, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        MinSimpleCloudShadowingDistance;                   // 0x518(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        MaxSimpleCloudShadowingDistance;                   // 0x51C(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        SimpleCloudShadowSharpness;                        // 0x520(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_40A[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	bool                                         Visible;                                           // 0x528(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, EditConst)
	uint8                                        Pad_40B[0xF];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ATrueSkySequenceActor* GetDefaultObj();

	void SetTime(float Value);
	float SetPointLightSource(int32* ID, float* Intensity, struct FVector* Pos);
	void SetPointLight(class APointLight* Source);
	int32 SetKeyframeInt(class FString* Name, int32 Value);
	int32 SetKeyframeFloat(class FString* Name, float Value);
	void SetInt(class FString* Name, int32 Value);
	void SetFloat(class FString* Name, float Value);
	struct FRotator GetSunRotation();
	struct FLinearColor GetSunColor();
	int32 GetNextModifiableSkyKeyframe();
	int32 GetNextModifiableCloudKeyframe();
	int32 GetKeyframeInt(class FString* Name);
	float GetKeyframeFloat(class FString* Name);
	int32 GetInt(class FString* Name);
	float GetFloat(class FString* Name);
	void ForceUpdate();
	float CloudPointTest(int32 QueryID, struct FVector* Pos);
	float CloudLineTest(int32 QueryID, const struct FVector& StartPos, const struct FVector& EndPos);
};

// 0x10 (0x38 - 0x28)
// Class TrueSkyPlugin.TrueSkySequenceAsset
class UTrueSkySequenceAsset : public UObject
{
public:
	TArray<uint8>                                SequenceText;                                      // 0x28(0x10)(BlueprintReadOnly, EditFixedSize, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UTrueSkySequenceAsset* GetDefaultObj();

};

}


