#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x48 - 0x0)
// Function CustomMouseWidget.CustomMouseWidget_C.SetInnerRingScales
struct UCustomMouseWidget_C_SetInnerRingScales_Params
{
public:
	double                                       Scale0;                                            // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       Scale1;                                            // 0x8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       Scale2;                                            // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x18(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, EditConst, SubobjectReference)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue_1;               // 0x28(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, EditConst, SubobjectReference, Interp)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue_2;               // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, EditConst, SubobjectReference, RepNotify, Interp)
};

// 0x14 (0x14 - 0x0)
// Function CustomMouseWidget.CustomMouseWidget_C.SetPointerColorAdd
struct UCustomMouseWidget_C_SetPointerColorAdd_Params
{
public:
	double                                       Add;                                               // 0x0(0x8)(Edit, ConstParm, Net, Parm, ReturnParm, DisableEditOnTemplate)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x8(0x8)(BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x10(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function CustomMouseWidget.CustomMouseWidget_C.ShowReticule
struct UCustomMouseWidget_C_ShowReticule_Params
{
public:
	bool                                         Show;                                              // 0x0(0x1)(BlueprintVisible, ExportObject, Net, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function CustomMouseWidget.CustomMouseWidget_C.SetPointerScale
struct UCustomMouseWidget_C_SetPointerScale_Params
{
public:
	double                                       NewParam;                                          // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, EditConst, SubobjectReference)
};

// 0x34 (0x34 - 0x0)
// Function CustomMouseWidget.CustomMouseWidget_C.SetArrowAlpha
struct UCustomMouseWidget_C_SetArrowAlpha_Params
{
public:
	double                                       LeftRightAlpha;                                    // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	double                                       UpDownAlpha;                                       // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         UseArrow;                                          // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1906[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;  // 0x14(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1; // 0x18(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	float                                        CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_2; // 0x1C(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)
	float                                        CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_3; // 0x20(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, NonTransactional)
	float                                        CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_4; // 0x24(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
	float                                        CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_5; // 0x28(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp, NonTransactional)
	float                                        CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_6; // 0x2C(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional)
	float                                        CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_7; // 0x30(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, EditorOnly)
};

// 0x4 (0x4 - 0x0)
// Function CustomMouseWidget.CustomMouseWidget_C.ExecuteUbergraph_CustomMouseWidget
struct UCustomMouseWidget_C_ExecuteUbergraph_CustomMouseWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(ConstParm, BlueprintVisible, Net, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

}
}


