#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x78 - 0x30)
// Class NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect
class UAnimNotifyState_TimedNiagaraEffect : public UAnimNotifyState
{
public:
	class UNiagaraSystem*                        Template;                                          // 0x30(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, SubobjectReference)
	class FName                                  SocketName;                                        // 0x38(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               LocationOffset;                                    // 0x40(0x18)(OutParm, Transient, InstancedReference, SubobjectReference)
	struct FRotator                              RotationOffset;                                    // 0x58(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	bool                                         bDestroyAtEnd;                                     // 0x70(0x1)(Edit, ConstParm, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_357[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAnimNotifyState_TimedNiagaraEffect* GetDefaultObj();

	class UFXSystemComponent* GetSpawnedEffect();
};

// 0x70 (0xE8 - 0x78)
// Class NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffectAdvanced
class UAnimNotifyState_TimedNiagaraEffectAdvanced : public UAnimNotifyState_TimedNiagaraEffect
{
public:
	bool                                         bEnableNormalizedNotifyProgress;                   // 0x78(0x1)(Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_373[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class FName                                  NotifyProgressUserParameter;                       // 0x7C(0x8)(Edit, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_374[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FCurveParameterPair>           AnimCurves;                                        // 0x88(0x10)(Edit, ConstParm, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_375[0x50];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAnimNotifyState_TimedNiagaraEffectAdvanced* GetDefaultObj();

	float GetNotifyProgress();
};

// 0x90 (0xD0 - 0x40)
// Class NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect
class UAnimNotify_PlayNiagaraEffect : public UAnimNotify
{
public:
	class UNiagaraSystem*                        Template;                                          // 0x40(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               LocationOffset;                                    // 0x48(0x18)(OutParm, Transient, InstancedReference, SubobjectReference)
	struct FRotator                              RotationOffset;                                    // 0x60(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	struct FVector                               Scale;                                             // 0x78(0x18)(Edit, ExportObject, Parm, ZeroConstructor, Transient, Config)
	bool                                         bAbsoluteScale;                                    // 0x90(0x1)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_377[0x2F];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        Attached : 1;                                      // Mask: 0x1, PropSize: 0x10xC0(0x1)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        BitPad_2C : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_378[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class FName                                  SocketName;                                        // 0xC4(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_379[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAnimNotify_PlayNiagaraEffect* GetDefaultObj();

	class UFXSystemComponent* GetSpawnedEffect();
};

}


