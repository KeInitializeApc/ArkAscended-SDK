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

// 0x167 (0x168 - 0x1)
// ScriptStruct FPVClimbPickWeaponAnimBP_Base.FPVClimbPickWeaponAnimBP_Base_C.AnimBlueprintGeneratedConstantData
struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
public:
	uint8                                        Pad_3AA2[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  __NameProperty_204;                                // 0x4(0x8)(ConstParm, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, EditorOnly, AutoWeak, ContainsInstancedReference)
	class FName                                  __NameProperty_205;                                // 0xC(0x8)(ConstParm, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, EditorOnly, AutoWeak, ContainsInstancedReference)
	int32                                        __IntProperty_206;                                 // 0x14(0x4)(ConstParm, ExportObject, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly, AutoWeak, ContainsInstancedReference)
	class FName                                  __NameProperty_207;                                // 0x18(0x8)(ConstParm, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NoDestructor, AutoWeak, ContainsInstancedReference)
	int32                                        __IntProperty_208;                                 // 0x20(0x4)(ConstParm, ExportObject, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NoDestructor, AutoWeak, ContainsInstancedReference)
	class FName                                  __NameProperty_209;                                // 0x24(0x8)(ConstParm, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, NoDestructor, AutoWeak, ContainsInstancedReference)
	int32                                        __IntProperty_210;                                 // 0x2C(0x4)(ConstParm, ExportObject, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NoDestructor, AutoWeak, ContainsInstancedReference)
	TArray<float>                                __ArrayProperty_211;                               // 0x30(0x10)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional, NoDestructor, AutoWeak, ContainsInstancedReference)
	bool                                         __BoolProperty_212;                                // 0x40(0x1)(BlueprintReadOnly, Net, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, NoDestructor, AutoWeak, ContainsInstancedReference)
	uint8                                        Pad_3AA3[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        __FloatProperty_213;                               // 0x44(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, NoDestructor, AutoWeak, ContainsInstancedReference)
	struct FInputScaleBiasClampConstants         __StructProperty_214;                              // 0x48(0x2C)(ConstParm, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, NoDestructor, AutoWeak, ContainsInstancedReference)
	float                                        __FloatProperty_215;                               // 0x74(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference)
	enum class EAnimSyncMethod                   __EnumProperty_216;                                // 0x78(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference)
	enum class EAnimGroupRole                    __ByteProperty_217;                                // 0x79(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference)
	uint8                                        Pad_3AA4[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  __NameProperty_218;                                // 0x7C(0x8)(ConstParm, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference)
	uint8                                        Pad_3AA5[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UBlendProfile*                         __BlendProfile_219;                                // 0x88(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference)
	class UCurveFloat*                           __CurveFloat_220;                                  // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference)
	bool                                         __BoolProperty_221;                                // 0x98(0x1)(BlueprintReadOnly, Net, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference)
	enum class EAlphaBlendOption                 __EnumProperty_222;                                // 0x99(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference)
	enum class EBlendListTransitionType          __EnumProperty_223;                                // 0x9A(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, AutoWeak, ContainsInstancedReference)
	uint8                                        Pad_3AA6[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<float>                                __ArrayProperty_224;                               // 0xA0(0x10)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, AutoWeak, ContainsInstancedReference)
	struct FAnimNodeFunctionRef                  __StructProperty_225;                              // 0xB0(0x20)(ConstParm, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, AutoWeak, ContainsInstancedReference)
	struct FAnimSubsystem_PropertyAccess         AnimBlueprintExtension_PropertyAccess;             // 0xD0(0x80)(ConstParm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	struct FAnimSubsystem_Base                   AnimBlueprintExtension_Base;                       // 0x150(0x18)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
};

// 0x6 (0x7 - 0x1)
// ScriptStruct FPVClimbPickWeaponAnimBP_Base.FPVClimbPickWeaponAnimBP_Base_C.AnimBlueprintGeneratedMutableData
struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
public:
	bool                                         __BoolProperty;                                    // 0x1(0x1)(BlueprintReadOnly, Net, DisableEditOnInstance, SubobjectReference)
	bool                                         __BoolProperty_0;                                  // 0x2(0x1)(BlueprintReadOnly, Net, DisableEditOnInstance, SubobjectReference, RepNotify)
	bool                                         __BoolProperty_1;                                  // 0x3(0x1)(BlueprintReadOnly, Net, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         __BoolProperty_2;                                  // 0x4(0x1)(BlueprintReadOnly, Net, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	bool                                         __BoolProperty_3;                                  // 0x5(0x1)(BlueprintReadOnly, Net, DisableEditOnInstance, SubobjectReference, NonTransactional)
	bool                                         __BoolProperty_4;                                  // 0x6(0x1)(BlueprintReadOnly, Net, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
};

}

