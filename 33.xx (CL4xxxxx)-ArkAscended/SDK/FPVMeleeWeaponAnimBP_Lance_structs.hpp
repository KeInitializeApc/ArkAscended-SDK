#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x15F (0x160 - 0x1)
// ScriptStruct FPVMeleeWeaponAnimBP_Lance.FPVMeleeWeaponAnimBP_Lance_C.AnimBlueprintGeneratedConstantData
struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
public:
	uint8                                        Pad_3248[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  __NameProperty_174;                                // 0x4(0x8)(Edit, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly, ContainsInstancedReference)
	int32                                        __IntProperty_175;                                 // 0xC(0x4)(ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NoDestructor, ContainsInstancedReference)
	class FName                                  __NameProperty_176;                                // 0x10(0x8)(Edit, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, SubobjectReference, RepNotify, NoDestructor, ContainsInstancedReference)
	TArray<float>                                __ArrayProperty_177;                               // 0x18(0x10)(Edit, ConstParm, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp, NoDestructor, ContainsInstancedReference)
	class UBlendProfile*                         __BlendProfile_178;                                // 0x28(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NoDestructor, ContainsInstancedReference)
	class UCurveFloat*                           __CurveFloat_179;                                  // 0x30(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional, NoDestructor, ContainsInstancedReference)
	enum class EAlphaBlendOption                 __EnumProperty_180;                                // 0x38(0x1)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional, NoDestructor, ContainsInstancedReference)
	enum class EBlendListTransitionType          __EnumProperty_181;                                // 0x39(0x1)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional, NoDestructor, ContainsInstancedReference)
	uint8                                        Pad_3251[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<float>                                __ArrayProperty_182;                               // 0x40(0x10)(Edit, ConstParm, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, NoDestructor, ContainsInstancedReference)
	bool                                         __BoolProperty_183;                                // 0x50(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, EditorOnly, NoDestructor, ContainsInstancedReference)
	uint8                                        Pad_3254[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  __NameProperty_184;                                // 0x54(0x8)(Edit, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, SubobjectReference, RepNotify, EditorOnly, NoDestructor, ContainsInstancedReference)
	int32                                        __IntProperty_185;                                 // 0x5C(0x4)(ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly, NoDestructor, ContainsInstancedReference)
	class FName                                  __NameProperty_186;                                // 0x60(0x8)(Edit, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, SubobjectReference, RepNotify, Interp, EditorOnly, NoDestructor, ContainsInstancedReference)
	float                                        __FloatProperty_187;                               // 0x68(0x4)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional, EditorOnly, NoDestructor, ContainsInstancedReference)
	struct FInputScaleBiasClampConstants         __StructProperty_188;                              // 0x6C(0x2C)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, SubobjectReference, RepNotify, NonTransactional, EditorOnly, NoDestructor, ContainsInstancedReference)
	float                                        __FloatProperty_189;                               // 0x98(0x4)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, EditorOnly, NoDestructor, ContainsInstancedReference)
	bool                                         __BoolProperty_190;                                // 0x9C(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, ContainsInstancedReference)
	enum class EAnimSyncMethod                   __EnumProperty_191;                                // 0x9D(0x1)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, AutoWeak, ContainsInstancedReference)
	enum class EAnimGroupRole                    __ByteProperty_192;                                // 0x9E(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, AutoWeak, ContainsInstancedReference)
	uint8                                        Pad_3259[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  __NameProperty_193;                                // 0xA0(0x8)(Edit, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, SubobjectReference, Interp, AutoWeak, ContainsInstancedReference)
	struct FAnimNodeFunctionRef                  __StructProperty_194;                              // 0xA8(0x20)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, SubobjectReference, RepNotify, Interp, AutoWeak, ContainsInstancedReference)
	struct FAnimSubsystem_PropertyAccess         AnimBlueprintExtension_PropertyAccess;             // 0xC8(0x80)(Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, SubobjectReference)
	struct FAnimSubsystem_Base                   AnimBlueprintExtension_Base;                       // 0x148(0x18)(ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, SubobjectReference)
};

// 0x4 (0x5 - 0x1)
// ScriptStruct FPVMeleeWeaponAnimBP_Lance.FPVMeleeWeaponAnimBP_Lance_C.AnimBlueprintGeneratedMutableData
struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
public:
	bool                                         __BoolProperty;                                    // 0x1(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         __BoolProperty_0;                                  // 0x2(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify)
	bool                                         __BoolProperty_1;                                  // 0x3(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	bool                                         __BoolProperty_2;                                  // 0x4(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
};

}


