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

// 0x10 (0x10 - 0x0)
// Function AdvancedWidgets.RadialSlider.SetValueTags
struct URadialSlider_SetValueTags_Params
{
public:
	TArray<float>                                InValueTags;                                       // 0x0(0x10)(Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function AdvancedWidgets.RadialSlider.SetValue
struct URadialSlider_SetValue_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AdvancedWidgets.RadialSlider.SetUseVerticalDrag
struct URadialSlider_SetUseVerticalDrag_Params
{
public:
	bool                                         InUseVerticalDrag;                                 // 0x0(0x1)(Edit, ExportObject, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function AdvancedWidgets.RadialSlider.SetStepSize
struct URadialSlider_SetStepSize_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x88 (0x88 - 0x0)
// Function AdvancedWidgets.RadialSlider.SetSliderRange
struct URadialSlider_SetSliderRange_Params
{
public:
	struct FRuntimeFloatCurve                    InSliderRange;                                     // 0x0(0x88)(Edit, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AdvancedWidgets.RadialSlider.SetSliderProgressColor
struct URadialSlider_SetSliderProgressColor_Params
{
public:
	struct FLinearColor                          InValue;                                           // 0x0(0x10)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function AdvancedWidgets.RadialSlider.SetSliderHandleStartAngle
struct URadialSlider_SetSliderHandleStartAngle_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function AdvancedWidgets.RadialSlider.SetSliderHandleEndAngle
struct URadialSlider_SetSliderHandleEndAngle_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AdvancedWidgets.RadialSlider.SetSliderHandleColor
struct URadialSlider_SetSliderHandleColor_Params
{
public:
	struct FLinearColor                          InValue;                                           // 0x0(0x10)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AdvancedWidgets.RadialSlider.SetSliderBarColor
struct URadialSlider_SetSliderBarColor_Params
{
public:
	struct FLinearColor                          InValue;                                           // 0x0(0x10)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AdvancedWidgets.RadialSlider.SetShowSliderHandle
struct URadialSlider_SetShowSliderHandle_Params
{
public:
	bool                                         InShowSliderHandle;                                // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AdvancedWidgets.RadialSlider.SetShowSliderHand
struct URadialSlider_SetShowSliderHand_Params
{
public:
	bool                                         InShowSliderHand;                                  // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AdvancedWidgets.RadialSlider.SetLocked
struct URadialSlider_SetLocked_Params
{
public:
	bool                                         InValue;                                           // 0x0(0x1)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AdvancedWidgets.RadialSlider.SetHandStartEndRatio
struct URadialSlider_SetHandStartEndRatio_Params
{
public:
	struct FVector2D                             InValue;                                           // 0x0(0x10)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function AdvancedWidgets.RadialSlider.SetCustomDefaultValue
struct URadialSlider_SetCustomDefaultValue_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AdvancedWidgets.RadialSlider.SetCenterBackgroundColor
struct URadialSlider_SetCenterBackgroundColor_Params
{
public:
	struct FLinearColor                          InValue;                                           // 0x0(0x10)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function AdvancedWidgets.RadialSlider.SetAngularOffset
struct URadialSlider_SetAngularOffset_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function AdvancedWidgets.RadialSlider.GetValue
struct URadialSlider_GetValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function AdvancedWidgets.RadialSlider.GetNormalizedSliderHandlePosition
struct URadialSlider_GetNormalizedSliderHandlePosition_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function AdvancedWidgets.RadialSlider.GetCustomDefaultValue
struct URadialSlider_GetCustomDefaultValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

}
}


