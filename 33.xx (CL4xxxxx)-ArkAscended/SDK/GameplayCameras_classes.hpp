#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x140 (0x230 - 0xF0)
// Class GameplayCameras.MatineeCameraShake
class UMatineeCameraShake : public UCameraShakeBase
{
public:
	float                                        OscillationDuration;                               // 0xF0(0x4)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        OscillationBlendInTime;                            // 0xF4(0x4)(Net, EditFixedSize, Parm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        OscillationBlendOutTime;                           // 0xF8(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	struct FROscillator                          RotOscillation;                                    // 0xFC(0x24)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	struct FVOscillator                          LocOscillation;                                    // 0x120(0x24)(Edit, ConstParm, EditFixedSize, Parm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	struct FFOscillator                          FOVOscillation;                                    // 0x144(0xC)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        AnimPlayRate;                                      // 0x150(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        AnimScale;                                         // 0x154(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        AnimBlendInTime;                                   // 0x158(0x4)(BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        AnimBlendOutTime;                                  // 0x15C(0x4)(Edit, ConstParm, Net, Parm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        RandomAnimSegmentDuration;                         // 0x160(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1B25[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UCameraAnim*                           Anim;                                              // 0x168(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	class UCameraAnimationSequence*              AnimSequence;                                      // 0x170(0x8)(ConstParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig)
	uint8                                        bRandomAnimSegment : 1;                            // Mask: 0x1, PropSize: 0x10x178(0x1)(Edit, ConstParm, ExportObject, Parm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        BitPad_E9 : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1B26[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        OscillatorTimeRemaining;                           // 0x17C(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	class UCameraAnimInst*                       AnimInst;                                          // 0x180(0x8)(ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1B28[0x78];                                    // Fixing Size After Last Property  > TateDumper <
	class USequenceCameraShakePattern*           SequenceShakePattern;                              // 0x200(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1B29[0x28];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMatineeCameraShake* GetDefaultObj();

	struct FRotator StartMatineeCameraShakeFromSource(class UCameraShakeSourceComponent** SourceComponent, float Scale, class UMatineeCameraShake** ReturnValue);
	struct FRotator StartMatineeCameraShake(float Scale, class UMatineeCameraShake** ReturnValue);
	void ReceiveStopShake(bool bImmediately);
	void ReceivePlayShake(float Scale);
	void ReceiveIsFinished(bool* ReturnValue);
	struct FMinimalViewInfo BlueprintUpdateCameraShake();
};

// 0x0 (0x28 - 0x28)
// Class GameplayCameras.MatineeCameraShakePattern
class UMatineeCameraShakePattern : public UCameraShakePattern
{
public:

	static class UClass* StaticClass();
	static class UMatineeCameraShakePattern* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GameplayCameras.MovieSceneMatineeCameraShakeEvaluator
class UMovieSceneMatineeCameraShakeEvaluator : public UMovieSceneCameraShakeEvaluator
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneMatineeCameraShakeEvaluator* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GameplayCameras.MatineeCameraShakeFunctionLibrary
class UMatineeCameraShakeFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMatineeCameraShakeFunctionLibrary* GetDefaultObj();

	void Conv_MatineeCameraShake(class UCameraShakeBase** CameraShake, class UMatineeCameraShake** ReturnValue);
};

// 0x18 (0x60 - 0x48)
// Class GameplayCameras.CameraAnimationCameraModifier
class UCameraAnimationCameraModifier : public UCameraModifier
{
public:
	TArray<struct FActiveCameraAnimationInfo>    ActiveAnimations;                                  // 0x48(0x10)(ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint16                                       NextInstanceSerialNumber;                          // 0x58(0x2)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1B62[0x6];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCameraAnimationCameraModifier* GetDefaultObj();

	struct FCameraAnimationHandle StopCameraAnimation(bool* bImmediate);
	void StopAllCameraAnimationsOf(class UCameraAnimationSequence* Sequence, bool* bImmediate);
	void StopAllCameraAnimations(bool* bImmediate);
	struct FCameraAnimationParams PlayCameraAnimation(class UCameraAnimationSequence* Sequence, struct FCameraAnimationHandle* ReturnValue);
	struct FCameraAnimationHandle IsCameraAnimationActive(bool* ReturnValue);
	void GetCameraAnimationCameraModifierFromPlayerController(class APlayerController** PlayerController, class UCameraAnimationCameraModifier** ReturnValue);
	int32 GetCameraAnimationCameraModifierFromID(class UCameraAnimationCameraModifier** ReturnValue);
	class UObject* GetCameraAnimationCameraModifier(int32* PlayerIndex, class UCameraAnimationCameraModifier** ReturnValue);
};

// 0x20 (0x48 - 0x28)
// Class GameplayCameras.CompositeCameraShakePattern
class UCompositeCameraShakePattern : public UCameraShakePattern
{
public:
	TArray<class UCameraShakePattern*>           ChildPatterns;                                     // 0x28(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1B69[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCompositeCameraShakePattern* GetDefaultObj();

};

// 0x0 (0xF0 - 0xF0)
// Class GameplayCameras.DefaultCameraShakeBase
class UDefaultCameraShakeBase : public UCameraShakeBase
{
public:

	static class UClass* StaticClass();
	static class UDefaultCameraShakeBase* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class GameplayCameras.GameplayCamerasSubsystem
class UGameplayCamerasSubsystem : public UWorldSubsystem
{
public:

	static class UClass* StaticClass();
	static class UGameplayCamerasSubsystem* GetDefaultObj();

	struct FCameraAnimationHandle StopCameraAnimation(class APlayerController** PlayerController, bool* bImmediate);
	void StopAllCameraAnimationsOf(class APlayerController** PlayerController, class UCameraAnimationSequence* Sequence, bool* bImmediate);
	void StopAllCameraAnimations(class APlayerController** PlayerController, bool* bImmediate);
	struct FCameraAnimationParams PlayCameraAnimation(class APlayerController** PlayerController, class UCameraAnimationSequence* Sequence, struct FCameraAnimationHandle* ReturnValue);
	struct FCameraAnimationHandle IsCameraAnimationActive(class APlayerController** PlayerController, bool* ReturnValue);
};

// 0x10 (0x38 - 0x28)
// Class GameplayCameras.SimpleCameraShakePattern
class USimpleCameraShakePattern : public UCameraShakePattern
{
public:
	float                                        Duration;                                          // 0x28(0x4)(ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, DuplicateTransient)
	float                                        BlendInTime;                                       // 0x2C(0x4)(ConstParm, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        BlendOutTime;                                      // 0x30(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C20[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USimpleCameraShakePattern* GetDefaultObj();

};

// 0x80 (0xB8 - 0x38)
// Class GameplayCameras.PerlinNoiseCameraShakePattern
class UPerlinNoiseCameraShakePattern : public USimpleCameraShakePattern
{
public:
	float                                        LocationAmplitudeMultiplier;                       // 0x38(0x4)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        LocationFrequencyMultiplier;                       // 0x3C(0x4)(Edit, Net, EditFixedSize, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	struct FPerlinNoiseShaker                    X;                                                 // 0x40(0x8)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	struct FPerlinNoiseShaker                    Y;                                                 // 0x48(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	struct FPerlinNoiseShaker                    Z;                                                 // 0x50(0x8)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
	float                                        RotationAmplitudeMultiplier;                       // 0x58(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        RotationFrequencyMultiplier;                       // 0x5C(0x4)(Edit, ConstParm, EditFixedSize, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	struct FPerlinNoiseShaker                    Pitch;                                             // 0x60(0x8)(BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Transient, Config)
	struct FPerlinNoiseShaker                    Yaw;                                               // 0x68(0x8)(BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config)
	struct FPerlinNoiseShaker                    Roll;                                              // 0x70(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config)
	struct FPerlinNoiseShaker                    FOV;                                               // 0x78(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, GlobalConfig)
	uint8                                        Pad_1C27[0x38];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPerlinNoiseCameraShakePattern* GetDefaultObj();

};

// 0x0 (0xF0 - 0xF0)
// Class GameplayCameras.TestCameraShake
class UTestCameraShake : public UCameraShakeBase
{
public:

	static class UClass* StaticClass();
	static class UTestCameraShake* GetDefaultObj();

};

// 0x30 (0x68 - 0x38)
// Class GameplayCameras.ConstantCameraShakePattern
class UConstantCameraShakePattern : public USimpleCameraShakePattern
{
public:
	struct FVector                               LocationOffset;                                    // 0x38(0x18)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	struct FRotator                              RotationOffset;                                    // 0x50(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UConstantCameraShakePattern* GetDefaultObj();

};

// 0xA0 (0xD8 - 0x38)
// Class GameplayCameras.WaveOscillatorCameraShakePattern
class UWaveOscillatorCameraShakePattern : public USimpleCameraShakePattern
{
public:
	float                                        LocationAmplitudeMultiplier;                       // 0x38(0x4)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        LocationFrequencyMultiplier;                       // 0x3C(0x4)(Edit, Net, EditFixedSize, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	struct FWaveOscillator                       X;                                                 // 0x40(0xC)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	struct FWaveOscillator                       Y;                                                 // 0x4C(0xC)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	struct FWaveOscillator                       Z;                                                 // 0x58(0xC)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
	float                                        RotationAmplitudeMultiplier;                       // 0x64(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        RotationFrequencyMultiplier;                       // 0x68(0x4)(Edit, ConstParm, EditFixedSize, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	struct FWaveOscillator                       Pitch;                                             // 0x6C(0xC)(BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Transient, Config)
	struct FWaveOscillator                       Yaw;                                               // 0x78(0xC)(BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config)
	struct FWaveOscillator                       Roll;                                              // 0x84(0xC)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config)
	struct FWaveOscillator                       FOV;                                               // 0x90(0xC)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, GlobalConfig)
	uint8                                        Pad_1C36[0x3C];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UWaveOscillatorCameraShakePattern* GetDefaultObj();

};

}


