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
	TArray<class UTrueSkySequenceAsset*>         ActiveSequences;                                   // 0x4C8(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<float>                                BlendWeights;                                      // 0x4D8(0x10)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2D*                            MoonTexture;                                       // 0x4E8(0x8)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	class UTexture2D*                            CosmicBackgroundTexture;                           // 0x4F0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	class UTextureRenderTarget2D*                External_ScatterRT;                                // 0x4F8(0x8)(Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	class UTextureRenderTarget2D*                External_LossRT;                                   // 0x500(0x8)(ConstParm, ExportObject, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        Brightness;                                        // 0x508(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance)
	float                                        MetresPerUnit;                                     // 0x50C(0x4)(ConstParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        MinSimpleCloudShadowing;                           // 0x510(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        MaxSimpleCloudShadowing;                           // 0x514(0x4)(ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        MinSimpleCloudShadowingDistance;                   // 0x518(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        MaxSimpleCloudShadowingDistance;                   // 0x51C(0x4)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        SimpleCloudShadowSharpness;                        // 0x520(0x4)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C8[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	bool                                         Visible;                                           // 0x528(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst)
	uint8                                        Pad_2C9[0xF];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ATrueSkySequenceActor* GetDefaultObj();

	void SetTime(float* Value);
	float SetPointLightSource(int32* ID, float Intensity, float* MaxRadius);
	void SetPointLight(class APointLight** Source);
	int32 SetKeyframeInt(class FString* Name, int32* Value);
	int32 SetKeyframeFloat(class FString* Name, float* Value);
	void SetInt(class FString* Name, int32* Value);
	void SetFloat(class FString* Name, float* Value);
	void GetSunRotation(const struct FRotator& ReturnValue);
	void GetSunColor(const struct FLinearColor& ReturnValue);
	void GetNextModifiableSkyKeyframe(int32 ReturnValue);
	int32 GetNextModifiableCloudKeyframe(int32 ReturnValue);
	int32 GetKeyframeInt(class FString* Name, int32 ReturnValue);
	int32 GetKeyframeFloat(class FString* Name, float ReturnValue);
	void GetInt(class FString* Name, int32 ReturnValue);
	void GetFloat(class FString* Name, float ReturnValue);
	void ForceUpdate();
	struct FVector CloudPointTest(int32* QueryID, float ReturnValue);
	struct FVector CloudLineTest(int32* QueryID, const struct FVector& EndPos, float ReturnValue);
};

// 0x10 (0x38 - 0x28)
// Class TrueSkyPlugin.TrueSkySequenceAsset
class UTrueSkySequenceAsset : public UObject
{
public:
	TArray<uint8>                                SequenceText;                                      // 0x28(0x10)(Edit, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UTrueSkySequenceAsset* GetDefaultObj();

};

}


