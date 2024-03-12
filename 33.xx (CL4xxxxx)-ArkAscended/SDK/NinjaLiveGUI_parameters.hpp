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

// 0x39 (0x39 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.GetSelectedActor
struct UNinjaLiveGUI_C_GetSelectedActor_Params
{
public:
	int32                                        SelectedActorIndex;                                // 0x0(0x4)(Edit, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5967[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class ANinjaLive_C*                          NinjaLiveActor;                                    // 0x8(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	TArray<class ANinjaLive_PresetManager_C*>    CallFunc_GetAllActorsOfClass_OutActors;            // 0x10(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class ANinjaLive_PresetManager_C*            CallFunc_Array_Get_Item;                           // 0x20(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	class AActor*                                CallFunc_Array_Get_Item_1;                         // 0x28(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
	class ANinjaLive_C*                          K2Node_DynamicCast_AsNinja_Live;                   // 0x30(0x8)(Edit, Net, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__ComboBoxString_89_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__ComboBoxString_89_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(ConstParm, BlueprintReadOnly, Net, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.PreConstruct
struct UNinjaLiveGUI_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__ComboBox_Presets_K2Node_ComponentBoundEvent_36_OnSelectionChangedEvent__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__ComboBox_Presets_K2Node_ComponentBoundEvent_36_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(ConstParm, BlueprintReadOnly, Net, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.OnPresetDuplicationFinished
struct UNinjaLiveGUI_C_OnPresetDuplicationFinished_Params
{
public:
	class UDataTable*                            DuplicatedPreset;                                  // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__CheckBox_21_K2Node_ComponentBoundEvent_219_OnCheckBoxComponentStateChanged__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__CheckBox_21_K2Node_ComponentBoundEvent_219_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
public:
	bool                                         bIsChecked;                                        // 0x0(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x3C (0x3C - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.Tick
struct UNinjaLiveGUI_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	float                                        InDeltaTime;                                       // 0x38(0x4)(ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x5 (0x5 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__025_SimareaMoOffset_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__025_SimareaMoOffset_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class ETextCommit                       CommitMethod;                                      // 0x4(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x5 (0x5 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__50bSpinBox_BrushRnd_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__50bSpinBox_BrushRnd_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class ETextCommit                       CommitMethod;                                      // 0x4(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x5 (0x5 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_Divergence_K2Node_ComponentBoundEvent_7_OnSpinBoxValueCommittedEvent__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__SpinBox_Divergence_K2Node_ComponentBoundEvent_7_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class ETextCommit                       CommitMethod;                                      // 0x4(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_Divergence_K2Node_ComponentBoundEvent_6_OnSpinBoxValueChangedEvent__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__SpinBox_Divergence_K2Node_ComponentBoundEvent_6_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x5 (0x5 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_Speed_K2Node_ComponentBoundEvent_5_OnSpinBoxValueCommittedEvent__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__SpinBox_Speed_K2Node_ComponentBoundEvent_5_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class ETextCommit                       CommitMethod;                                      // 0x4(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x5 (0x5 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_Feedback_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__SpinBox_Feedback_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class ETextCommit                       CommitMethod;                                      // 0x4(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_Feedback_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__SpinBox_Feedback_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x5 (0x5 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_DensityNoiseSize_K2Node_ComponentBoundEvent_7_OnSpinBoxValueCommittedEvent__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__SpinBox_DensityNoiseSize_K2Node_ComponentBoundEvent_7_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class ETextCommit                       CommitMethod;                                      // 0x4(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_DensityNoiseSize_K2Node_ComponentBoundEvent_6_OnSpinBoxValueChangedEvent__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__SpinBox_DensityNoiseSize_K2Node_ComponentBoundEvent_6_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x5 (0x5 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_DensityNoiseOffset_K2Node_ComponentBoundEvent_5_OnSpinBoxValueCommittedEvent__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__SpinBox_DensityNoiseOffset_K2Node_ComponentBoundEvent_5_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class ETextCommit                       CommitMethod;                                      // 0x4(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_DensityNoiseOffset_K2Node_ComponentBoundEvent_3_OnSpinBoxValueChangedEvent__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__SpinBox_DensityNoiseOffset_K2Node_ComponentBoundEvent_3_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x5 (0x5 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_DensityNoiseAmp_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__SpinBox_DensityNoiseAmp_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class ETextCommit                       CommitMethod;                                      // 0x4(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_DensityNoiseAmp_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__SpinBox_DensityNoiseAmp_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__21cSpinBox_VeloOffset_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__21cSpinBox_VeloOffset_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x5 (0x5 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__21cSpinBox_VeloOffset_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__21cSpinBox_VeloOffset_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class ETextCommit                       CommitMethod;                                      // 0x4(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_0_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__SpinBox_0_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x5 (0x5 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_0_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__SpinBox_0_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class ETextCommit                       CommitMethod;                                      // 0x4(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x5 (0x5 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__50SpinBox_BrushNoise_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__50SpinBox_BrushNoise_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class ETextCommit                       CommitMethod;                                      // 0x4(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x5 (0x5 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_Density2_K2Node_ComponentBoundEvent_3_OnSpinBoxValueCommittedEvent__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__SpinBox_Density2_K2Node_ComponentBoundEvent_3_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class ETextCommit                       CommitMethod;                                      // 0x4(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x5 (0x5 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_Density3_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__SpinBox_Density3_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class ETextCommit                       CommitMethod;                                      // 0x4(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x5 (0x5 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_Density4_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__SpinBox_Density4_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class ETextCommit                       CommitMethod;                                      // 0x4(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x5 (0x5 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__45SpinBox_VeloFromSimAreaMotion_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__45SpinBox_VeloFromSimAreaMotion_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class ETextCommit                       CommitMethod;                                      // 0x4(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__50ComboBox_NinjaOutputMaterial_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__50ComboBox_NinjaOutputMaterial_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(ConstParm, BlueprintReadOnly, Net, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__24SpinBox_DirNoise_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__24SpinBox_DirNoise_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x5 (0x5 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__24SpinBox_DirNoise_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__24SpinBox_DirNoise_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class ETextCommit                       CommitMethod;                                      // 0x4(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x5 (0x5 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__41SpinBox_BrushPuncture_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__41SpinBox_BrushPuncture_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class ETextCommit                       CommitMethod;                                      // 0x4(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_Add01_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__SpinBox_Add01_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x5 (0x5 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_Add01_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__SpinBox_Add01_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class ETextCommit                       CommitMethod;                                      // 0x4(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__AddCheckBox1_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__AddCheckBox1_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
public:
	bool                                         bIsChecked;                                        // 0x0(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__32SpinBox_DensSharpSize_K2Node_ComponentBoundEvent_41_OnSpinBoxValueChangedEvent__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__32SpinBox_DensSharpSize_K2Node_ComponentBoundEvent_41_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__31SpinBox_DensSharpen_K2Node_ComponentBoundEvent_40_OnSpinBoxValueChangedEvent__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__31SpinBox_DensSharpen_K2Node_ComponentBoundEvent_40_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__29SpinBox_DensHue_K2Node_ComponentBoundEvent_38_OnSpinBoxValueChangedEvent__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__29SpinBox_DensHue_K2Node_ComponentBoundEvent_38_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__28SpinBox_DensContrast_K2Node_ComponentBoundEvent_35_OnSpinBoxValueChangedEvent__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__28SpinBox_DensContrast_K2Node_ComponentBoundEvent_35_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__27SpinBox_DensShading_K2Node_ComponentBoundEvent_34_OnSpinBoxValueChangedEvent__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__27SpinBox_DensShading_K2Node_ComponentBoundEvent_34_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__25SpinBox_DensInputWeight_K2Node_ComponentBoundEvent_32_OnSpinBoxValueChangedEvent__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__25SpinBox_DensInputWeight_K2Node_ComponentBoundEvent_32_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__24SpinBox_VeloNoise_K2Node_ComponentBoundEvent_31_OnSpinBoxValueChangedEvent__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__24SpinBox_VeloNoise_K2Node_ComponentBoundEvent_31_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__22SpinBox_VeloAmplify_K2Node_ComponentBoundEvent_15_OnSpinBoxValueChangedEvent__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__22SpinBox_VeloAmplify_K2Node_ComponentBoundEvent_15_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__21SpinBox_VeloRotate_K2Node_ComponentBoundEvent_13_OnSpinBoxValueChangedEvent__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__21SpinBox_VeloRotate_K2Node_ComponentBoundEvent_13_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__20SpinBox_VeloOffsetY_K2Node_ComponentBoundEvent_12_OnSpinBoxValueChangedEvent__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__20SpinBox_VeloOffsetY_K2Node_ComponentBoundEvent_12_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__19SpinBox_VeloOffsetX_K2Node_ComponentBoundEvent_10_OnSpinBoxValueChangedEvent__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__19SpinBox_VeloOffsetX_K2Node_ComponentBoundEvent_10_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x5 (0x5 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_63_K2Node_ComponentBoundEvent_228_OnSpinBoxValueCommittedEvent__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__SpinBox_63_K2Node_ComponentBoundEvent_228_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class ETextCommit                       CommitMethod;                                      // 0x4(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x5 (0x5 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_62_K2Node_ComponentBoundEvent_121_OnSpinBoxValueCommittedEvent__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__SpinBox_62_K2Node_ComponentBoundEvent_121_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class ETextCommit                       CommitMethod;                                      // 0x4(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x19 (0x19 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__MultiLineEditableText_MetaData_K2Node_ComponentBoundEvent_26_OnMultiLineEditableTextCommittedEvent__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__MultiLineEditableText_MetaData_K2Node_ComponentBoundEvent_26_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
	enum class ETextCommit                       CommitMethod;                                      // 0x18(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x5 (0x5 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_60_K2Node_ComponentBoundEvent_225_OnSpinBoxValueCommittedEvent__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__SpinBox_60_K2Node_ComponentBoundEvent_225_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class ETextCommit                       CommitMethod;                                      // 0x4(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__ComboBox_NinjaTemplate3_K2Node_ComponentBoundEvent_223_OnSelectionChangedEvent__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__ComboBox_NinjaTemplate3_K2Node_ComponentBoundEvent_223_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(ConstParm, BlueprintReadOnly, Net, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__ComboBox_NinjaTemplate2_K2Node_ComponentBoundEvent_120_OnSelectionChangedEvent__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__ComboBox_NinjaTemplate2_K2Node_ComponentBoundEvent_120_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(ConstParm, BlueprintReadOnly, Net, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__ComboBox_NinjaTemplate1_K2Node_ComponentBoundEvent_220_OnSelectionChangedEvent__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__ComboBox_NinjaTemplate1_K2Node_ComponentBoundEvent_220_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(ConstParm, BlueprintReadOnly, Net, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x5 (0x5 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_26_K2Node_ComponentBoundEvent_128_OnSpinBoxValueCommittedEvent__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__SpinBox_26_K2Node_ComponentBoundEvent_128_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class ETextCommit                       CommitMethod;                                      // 0x4(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x5 (0x5 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_22_K2Node_ComponentBoundEvent_102_OnSpinBoxValueCommittedEvent__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__SpinBox_22_K2Node_ComponentBoundEvent_102_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class ETextCommit                       CommitMethod;                                      // 0x4(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x5 (0x5 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_23_K2Node_ComponentBoundEvent_100_OnSpinBoxValueCommittedEvent__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__SpinBox_23_K2Node_ComponentBoundEvent_100_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class ETextCommit                       CommitMethod;                                      // 0x4(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x5 (0x5 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_19_K2Node_ComponentBoundEvent_70_OnSpinBoxValueCommittedEvent__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__SpinBox_19_K2Node_ComponentBoundEvent_70_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class ETextCommit                       CommitMethod;                                      // 0x4(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x5 (0x5 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_18_K2Node_ComponentBoundEvent_94_OnSpinBoxValueCommittedEvent__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__SpinBox_18_K2Node_ComponentBoundEvent_94_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class ETextCommit                       CommitMethod;                                      // 0x4(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x5 (0x5 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_17_K2Node_ComponentBoundEvent_78_OnSpinBoxValueCommittedEvent__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__SpinBox_17_K2Node_ComponentBoundEvent_78_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class ETextCommit                       CommitMethod;                                      // 0x4(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x5 (0x5 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_16_K2Node_ComponentBoundEvent_76_OnSpinBoxValueCommittedEvent__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__SpinBox_16_K2Node_ComponentBoundEvent_76_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class ETextCommit                       CommitMethod;                                      // 0x4(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x5 (0x5 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_15_K2Node_ComponentBoundEvent_74_OnSpinBoxValueCommittedEvent__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__SpinBox_15_K2Node_ComponentBoundEvent_74_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class ETextCommit                       CommitMethod;                                      // 0x4(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x5 (0x5 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_14_K2Node_ComponentBoundEvent_72_OnSpinBoxValueCommittedEvent__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__SpinBox_14_K2Node_ComponentBoundEvent_72_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class ETextCommit                       CommitMethod;                                      // 0x4(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x5 (0x5 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_12_K2Node_ComponentBoundEvent_64_OnSpinBoxValueCommittedEvent__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__SpinBox_12_K2Node_ComponentBoundEvent_64_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class ETextCommit                       CommitMethod;                                      // 0x4(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x5 (0x5 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_11_K2Node_ComponentBoundEvent_60_OnSpinBoxValueCommittedEvent__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__SpinBox_11_K2Node_ComponentBoundEvent_60_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class ETextCommit                       CommitMethod;                                      // 0x4(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x5 (0x5 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_10_K2Node_ComponentBoundEvent_55_OnSpinBoxValueCommittedEvent__DelegateSignature
struct UNinjaLiveGUI_C_BndEvt__SpinBox_10_K2Node_ComponentBoundEvent_55_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class ETextCommit                       CommitMethod;                                      // 0x4(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x26C4 (0x26C4 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.ExecuteUbergraph_NinjaLiveGUI
struct UNinjaLiveGUI_C_ExecuteUbergraph_NinjaLiveGUI_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_5968[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_GetEngineVersion_ReturnValue;             // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class FString                                CallFunc_Mid_ReturnValue;                          // 0x18(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x28(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x2C(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x30(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x34(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	TArray<struct FSoftObjectPath>               Temp_struct_Variable;                              // 0x38(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x48(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_5969[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FTopLevelAssetPath>            Temp_struct_Variable_1;                            // 0x50(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x60(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x64(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x68(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
	bool                                         Temp_bool_Variable_1;                              // 0x6C(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         Temp_bool_Variable_2;                              // 0x6D(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_596A[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	TSet<struct FTopLevelAssetPath>              Temp_struct_Variable_2;                            // 0x70(0x50)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0xC0(0x1)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0xC1(0x1)(Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Temp_bool_Variable_3;                              // 0xC2(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue;              // 0xC3(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0xC4(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0xC8(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	int32                                        Temp_int_Array_Index_Variable_3;                   // 0xCC(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue_1;            // 0xD0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, Interp)
	bool                                         Temp_bool_Variable_4;                              // 0xD1(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
	uint8                                        Pad_596B[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Loop_Counter_Variable_3;                  // 0xD4(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional)
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0xD8(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
	int32                                        Temp_int_Array_Index_Variable_4;                   // 0xDC(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, NonTransactional)
	bool                                         Temp_bool_IsClosed_Variable_1;                     // 0xE0(0x1)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         Temp_bool_Has_Been_Initd_Variable_1;               // 0xE1(0x1)(Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         Temp_bool_Variable_5;                              // 0xE2(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
	uint8                                        Pad_596C[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Array_Index_Variable_5;                   // 0xE4(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, Interp, NonTransactional)
	bool                                         Temp_bool_Variable_6;                              // 0xE8(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
	bool                                         Temp_bool_Variable_7;                              // 0xE9(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, EditorOnly)
	uint8                                        Pad_596D[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Loop_Counter_Variable_4;                  // 0xEC(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, NonTransactional)
	int32                                        CallFunc_Add_IntInt_ReturnValue_4;                 // 0xF0(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
	int32                                        Temp_int_Array_Index_Variable_6;                   // 0xF4(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_5;         // 0xF8(0x10)(Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_5;        // 0x108(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
	bool                                         CallFunc_EqualEqual_StriStri_ReturnValue;          // 0x109(0x1)(Edit, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x10A(0x1)(BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         Temp_bool_Variable_8;                              // 0x10B(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, EditorOnly)
	bool                                         Temp_bool_Variable_9;                              // 0x10C(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, EditorOnly)
	uint8                                        Pad_596E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class ANinjaLive_PresetManager_C*>    CallFunc_GetAllActorsOfClass_OutActors;            // 0x110(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	TArray<class ANinjaLive_PresetManager_C*>    CallFunc_GetAllActorsOfClass_OutActors_1;          // 0x120(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference, Interp)
	class ANinjaLive_PresetManager_C*            CallFunc_Array_Get_Item;                           // 0x130(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	class ANinjaLive_PresetManager_C*            CallFunc_Array_Get_Item_1;                         // 0x138(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x140(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x144(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_596F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CallFunc_Array_Get_Item_2;                         // 0x148(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
	class FString                                CallFunc_GetDisplayName_ReturnValue;               // 0x150(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x160(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_5970[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TSet<struct FTopLevelAssetPath>              Temp_struct_Variable_3;                            // 0x168(0x50)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	TArray<class ANinjaLive_PresetManager_C*>    CallFunc_GetAllActorsOfClass_OutActors_2;          // 0x1B8(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_4;         // 0x1C8(0x10)(Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_4;        // 0x1D8(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
	uint8                                        Pad_5971[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class ANinjaLive_PresetManager_C*            CallFunc_Array_Get_Item_3;                         // 0x1E0(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, NonTransactional)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x1E8(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1E9(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5972[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CallFunc_Array_Get_Item_4;                         // 0x1F0(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, NonTransactional)
	class FString                                CallFunc_GetDisplayName_ReturnValue_1;             // 0x1F8(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	class UNinjaLiveComponent_C*                 CallFunc_GetComponentByClass_ReturnValue;          // 0x208(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x210(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x211(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         Temp_bool_Variable_10;                             // 0x212(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, EditorOnly)
	uint8                                        Pad_5973[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Loop_Counter_Variable_5;                  // 0x214(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, Interp, NonTransactional)
	int32                                        CallFunc_Add_IntInt_ReturnValue_5;                 // 0x218(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
	uint8                                        Pad_5974[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TScriptInterface<class IAssetRegistry>       CallFunc_GetAssetRegistry_ReturnValue;             // 0x220(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	TArray<class FName>                          K2Node_MakeArray_Array;                            // 0x230(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
	TArray<class FName>                          K2Node_MakeArray_Array_1;                          // 0x240(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference, Interp)
	TSet<class FName>                            K2Node_MakeSet_Set;                                // 0x250(0x50)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FTopLevelAssetPath>            Temp_struct_Variable_4;                            // 0x2A0(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	bool                                         Temp_bool_Variable_11;                             // 0x2B0(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional, EditorOnly)
	uint8                                        Pad_5975[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UDataTable*                            K2Node_CustomEvent_DuplicatedPreset;               // 0x2B8(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         Temp_bool_Variable_12;                             // 0x2C0(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
	uint8                                        Pad_5976[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FAssetData                            CallFunc_CreateAssetData_ReturnValue;              // 0x2C8(0x68)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x330(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	TArray<struct FSoftObjectPath>               Temp_struct_Variable_5;                            // 0x340(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
	bool                                         K2Node_ComponentBoundEvent_bIsChecked_1;           // 0x350(0x1)(Edit, ExportObject, Parm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
	uint8                                        Pad_5977[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x354(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x358(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         Temp_bool_Variable_13;                             // 0x359(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional, EditorOnly)
	uint8                                        Pad_5978[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Array_Get_Item_5;                         // 0x360(0x10)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp, NonTransactional)
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x370(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
	int32                                        CallFunc_Conv_StringToInt_ReturnValue;             // 0x374(0x4)(ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x378(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         CallFunc_StartsWith_ReturnValue;                   // 0x379(0x1)(ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_StartsWith_ReturnValue_1;                 // 0x37A(0x1)(ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_StartsWith_ReturnValue_2;                 // 0x37B(0x1)(ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_StartsWith_ReturnValue_3;                 // 0x37C(0x1)(ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, NonTransactional)
	bool                                         CallFunc_StartsWith_ReturnValue_4;                 // 0x37D(0x1)(ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_StartsWith_ReturnValue_5;                 // 0x37E(0x1)(ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional)
	bool                                         CallFunc_StartsWith_ReturnValue_6;                 // 0x37F(0x1)(ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
	bool                                         CallFunc_StartsWith_ReturnValue_7;                 // 0x380(0x1)(ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, EditorOnly)
	bool                                         CallFunc_StartsWith_ReturnValue_8;                 // 0x381(0x1)(ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, RepNotify, EditorOnly)
	bool                                         CallFunc_StartsWith_ReturnValue_9;                 // 0x382(0x1)(ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, Interp, EditorOnly)
	bool                                         CallFunc_StartsWith_ReturnValue_10;                // 0x383(0x1)(ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly)
	bool                                         CallFunc_StartsWith_ReturnValue_11;                // 0x384(0x1)(ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, NonTransactional, EditorOnly)
	bool                                         CallFunc_StartsWith_ReturnValue_12;                // 0x385(0x1)(ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
	bool                                         CallFunc_StartsWith_ReturnValue_13;                // 0x386(0x1)(ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional, EditorOnly)
	bool                                         CallFunc_StartsWith_ReturnValue_14;                // 0x387(0x1)(ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
	bool                                         CallFunc_StartsWith_ReturnValue_15;                // 0x388(0x1)(ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, NoDestructor)
	bool                                         CallFunc_StartsWith_ReturnValue_16;                // 0x389(0x1)(ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, RepNotify, NoDestructor)
	bool                                         CallFunc_StartsWith_ReturnValue_17;                // 0x38A(0x1)(ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, Interp, NoDestructor)
	bool                                         CallFunc_StartsWith_ReturnValue_18;                // 0x38B(0x1)(ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NoDestructor)
	bool                                         CallFunc_StartsWith_ReturnValue_19;                // 0x38C(0x1)(ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, NonTransactional, NoDestructor)
	bool                                         CallFunc_StartsWith_ReturnValue_20;                // 0x38D(0x1)(ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
	bool                                         CallFunc_StartsWith_ReturnValue_21;                // 0x38E(0x1)(ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional, NoDestructor)
	bool                                         CallFunc_StartsWith_ReturnValue_22;                // 0x38F(0x1)(ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, NoDestructor)
	bool                                         CallFunc_StartsWith_ReturnValue_23;                // 0x390(0x1)(ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, EditorOnly, NoDestructor)
	bool                                         CallFunc_StartsWith_ReturnValue_24;                // 0x391(0x1)(ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, RepNotify, EditorOnly, NoDestructor)
	bool                                         CallFunc_StartsWith_ReturnValue_25;                // 0x392(0x1)(ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, Interp, EditorOnly, NoDestructor)
	uint8                                        Pad_5979[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue_4;               // 0x394(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
	int32                                        CallFunc_Array_Length_ReturnValue_5;               // 0x398(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
	uint8                                        Pad_597A[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TSet<struct FTopLevelAssetPath>              Temp_struct_Variable_6;                            // 0x3A0(0x50)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
	TArray<struct FTopLevelAssetPath>            Temp_struct_Variable_7;                            // 0x3F0(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, EditorOnly)
	bool                                         Temp_bool_Variable_14;                             // 0x400(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x401(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_597B[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue_6;               // 0x404(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x408(0x1)(ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_597C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Loop_Counter_Variable_6;                  // 0x40C(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
	int32                                        CallFunc_Array_Length_ReturnValue_7;               // 0x410(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, EditorOnly)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x414(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x415(0x1)(ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_597D[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue_6;                 // 0x418(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
	uint8                                        Pad_597E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FSoftObjectPath>               Temp_struct_Variable_8;                            // 0x420(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
	class FString                                CallFunc_Array_Get_Item_6;                         // 0x430(0x10)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp, NonTransactional)
	int32                                        CallFunc_Array_Length_ReturnValue_8;               // 0x440(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, EditorOnly)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x444(0x14)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0x458(0x14)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	bool                                         Temp_bool_Variable_15;                             // 0x46C(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, NoDestructor)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x46D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, NonTransactional)
	bool                                         Temp_bool_Variable_16;                             // 0x46E(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NoDestructor)
	bool                                         Temp_bool_Variable_17;                             // 0x46F(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NoDestructor)
	bool                                         Temp_bool_Variable_18;                             // 0x470(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NoDestructor)
	uint8                                        Pad_597F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_2;                    // 0x474(0x14)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)
	bool                                         Temp_bool_Variable_19;                             // 0x488(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x489(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5980[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_GetDisplayName_ReturnValue_2;             // 0x490(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	class FString                                CallFunc_GetDisplayName_ReturnValue_3;             // 0x4A0(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	class FString                                CallFunc_Conv_NameToString_ReturnValue_1;          // 0x4B0(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	int32                                        CallFunc_Len_ReturnValue;                          // 0x4C0(0x4)(ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5981[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FARFilter                             CallFunc_MakeARFilter_ReturnValue;                 // 0x4C8(0x150)(ConstParm, BlueprintReadOnly, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue_7;                 // 0x618(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, EditorOnly)
	uint8                                        Pad_5982[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FAssetData>                    CallFunc_GetAssets_OutAssetData;                   // 0x620(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_GetAssets_ReturnValue;                    // 0x630(0x1)(DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5983[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue_8;                 // 0x634(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, EditorOnly)
	int32                                        CallFunc_Array_Length_ReturnValue_9;               // 0x638(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, EditorOnly)
	uint8                                        Pad_5984[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_RightChop_ReturnValue;                    // 0x640(0x10)(ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class FString                                CallFunc_RightChop_ReturnValue_1;                  // 0x650(0x10)(ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, Interp)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x660(0x10)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	class FString                                CallFunc_SelectString_ReturnValue;                 // 0x670(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_3;                    // 0x680(0x14)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, NonTransactional)
	bool                                         Temp_bool_Variable_20;                             // 0x694(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
	enum class ESlateVisibility                  CallFunc_GetVisibility_ReturnValue;                // 0x695(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5985[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_4;                    // 0x698(0x14)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x6AC(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_5986[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_5;                    // 0x6B0(0x14)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp, NonTransactional)
	uint8                                        Pad_5987[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UNinjaLiveComponent_C*                 CallFunc_GetComponentByClass_ReturnValue_1;        // 0x6C8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x6D0(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_5988[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_6;                    // 0x6D4(0x14)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x6E8(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_5989[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_7;                    // 0x6EC(0x14)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, EditorOnly)
	bool                                         Temp_bool_Variable_21;                             // 0x700(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional, NoDestructor)
	uint8                                        Pad_598A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                Temp_string_Variable;                              // 0x708(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         Temp_bool_Variable_22;                             // 0x718(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional, NoDestructor)
	uint8                                        Pad_598B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x71C(0x38)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	float                                        K2Node_Event_InDeltaTime;                          // 0x754(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_8;                    // 0x758(0x14)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, EditorOnly)
	uint8                                        Pad_598C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x770(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_9;                    // 0x778(0x14)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp, EditorOnly)
	int32                                        Temp_int_Array_Index_Variable_7;                   // 0x78C(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, EditorOnly)
	bool                                         Temp_bool_Variable_23;                             // 0x790(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, EditorOnly, NoDestructor)
	uint8                                        Pad_598D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Array_Get_Item_7;                         // 0x798(0x10)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, EditorOnly)
	bool                                         Temp_bool_Variable_24;                             // 0x7A8(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, EditorOnly, NoDestructor)
	uint8                                        Pad_598E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                Temp_string_Variable_1;                            // 0x7B0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         Temp_bool_Variable_25;                             // 0x7C0(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, EditorOnly, NoDestructor)
	bool                                         Temp_bool_Variable_26;                             // 0x7C1(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, EditorOnly, NoDestructor)
	uint8                                        Pad_598F[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                Temp_string_Variable_2;                            // 0x7C8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	bool                                         Temp_bool_Variable_27;                             // 0x7D8(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional, EditorOnly, NoDestructor)
	bool                                         Temp_bool_Variable_28;                             // 0x7D9(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional, EditorOnly, NoDestructor)
	uint8                                        Pad_5990[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x7E0(0x18)(Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         Temp_bool_Variable_29;                             // 0x7F8(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional, EditorOnly, NoDestructor)
	uint8                                        Pad_5991[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_1;            // 0x800(0x18)(Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_2;            // 0x818(0x18)(Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_3;            // 0x830(0x18)(Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_4;            // 0x848(0x18)(Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_5;            // 0x860(0x18)(Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_6;            // 0x878(0x18)(Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_7;            // 0x890(0x18)(Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, EditorOnly)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_8;            // 0x8A8(0x18)(Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_9;            // 0x8C0(0x18)(Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_10;           // 0x8D8(0x18)(Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_11;           // 0x8F0(0x18)(Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional, EditorOnly)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_12;           // 0x908(0x18)(Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_13;           // 0x920(0x18)(Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, EditorOnly)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_14;           // 0x938(0x18)(Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_15;           // 0x950(0x18)(Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, NoDestructor)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_16;           // 0x968(0x18)(Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NoDestructor)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_17;           // 0x980(0x18)(Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NoDestructor)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_18;           // 0x998(0x18)(Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NoDestructor)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_19;           // 0x9B0(0x18)(Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional, NoDestructor)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_20;           // 0x9C8(0x18)(Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_21;           // 0x9E0(0x18)(Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, NoDestructor)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_22;           // 0x9F8(0x18)(Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, NoDestructor)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_23;           // 0xA10(0x18)(Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, EditorOnly, NoDestructor)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_24;           // 0xA28(0x18)(Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly, NoDestructor)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_25;           // 0xA40(0x18)(Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly, NoDestructor)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_26;           // 0xA58(0x18)(Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly, NoDestructor)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_27;           // 0xA70(0x18)(Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional, EditorOnly, NoDestructor)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_28;           // 0xA88(0x18)(Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, EditorOnly, NoDestructor)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_29;           // 0xAA0(0x18)(Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, EditorOnly, NoDestructor)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_30;           // 0xAB8(0x18)(Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_31;           // 0xAD0(0x18)(Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_32;           // 0xAE8(0x18)(Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_33;           // 0xB00(0x18)(Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_34;           // 0xB18(0x18)(Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_35;           // 0xB30(0x18)(Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_36;           // 0xB48(0x18)(Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_37;           // 0xB60(0x18)(Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_38;           // 0xB78(0x18)(Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_39;           // 0xB90(0x18)(Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, EditorOnly)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_40;           // 0xBA8(0x18)(Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_41;           // 0xBC0(0x18)(Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_42;           // 0xBD8(0x18)(Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_43;           // 0xBF0(0x18)(Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional, EditorOnly)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_44;           // 0xC08(0x18)(Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_45;           // 0xC20(0x18)(Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, EditorOnly)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_46;           // 0xC38(0x18)(Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_10;                   // 0xC50(0x14)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp, EditorOnly)
	uint8                                        Pad_5992[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_47;           // 0xC68(0x18)(Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, NoDestructor)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_48;           // 0xC80(0x18)(Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NoDestructor)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_49;           // 0xC98(0x18)(Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NoDestructor)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_50;           // 0xCB0(0x18)(Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NoDestructor)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_51;           // 0xCC8(0x18)(Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional, NoDestructor)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_52;           // 0xCE0(0x18)(Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
	class FString                                Temp_string_Variable_3;                            // 0xCF8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue;             // 0xD08(0x1)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5993[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                Temp_string_Variable_4;                            // 0xD10(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_11;                   // 0xD20(0x14)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, NonTransactional, EditorOnly)
	uint8                                        Pad_5994[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                Temp_string_Variable_5;                            // 0xD38(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
	bool                                         Temp_bool_Variable_30;                             // 0xD48(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor)
	uint8                                        Pad_5995[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xD4C(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	float                                        K2Node_ComponentBoundEvent_InValue_52;             // 0xD5C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod_33;        // 0xD60(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         Temp_bool_Variable_31;                             // 0xD61(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_5996[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0xD68(0x18)(EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0xD80(0x10)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class FString                                CallFunc_Replace_ReturnValue;                      // 0xD90(0x10)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       CallFunc_Conv_StringToDouble_ReturnValue;          // 0xDA0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable_8;                   // 0xDA8(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, EditorOnly)
	uint8                                        Pad_5997[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Array_Get_Item_8;                         // 0xDB0(0x10)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, EditorOnly)
	float                                        K2Node_ComponentBoundEvent_InValue_51;             // 0xDC0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, NonTransactional, NoDestructor)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod_32;        // 0xDC4(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify)
	uint8                                        Pad_5998[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue_1;          // 0xDC8(0x18)(EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	float                                        K2Node_ComponentBoundEvent_InValue_50;             // 0xDE0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NoDestructor)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod_31;        // 0xDE4(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5999[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0xDE8(0x10)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue_2;          // 0xDF8(0x18)(EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)
	class FString                                CallFunc_Replace_ReturnValue_1;                    // 0xE10(0x10)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_2;          // 0xE20(0x10)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_Conv_StringToDouble_ReturnValue_1;        // 0xE30(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	class FString                                CallFunc_Replace_ReturnValue_2;                    // 0xE38(0x10)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_Conv_StringToDouble_ReturnValue_2;        // 0xE48(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	float                                        K2Node_ComponentBoundEvent_InValue_49;             // 0xE50(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, Interp, NoDestructor)
	float                                        K2Node_ComponentBoundEvent_InValue_48;             // 0xE54(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, NoDestructor)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod_30;        // 0xE58(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor)
	uint8                                        Pad_599A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        K2Node_ComponentBoundEvent_InValue_47;             // 0xE5C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, NoDestructor)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod_29;        // 0xE60(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, EditorOnly, NoDestructor)
	uint8                                        Pad_599B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue_3;          // 0xE68(0x18)(EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, NonTransactional)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue_4;          // 0xE80(0x18)(EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_3;          // 0xE98(0x10)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_4;          // 0xEA8(0x10)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	class FString                                CallFunc_Replace_ReturnValue_3;                    // 0xEB8(0x10)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, NonTransactional)
	class FString                                CallFunc_Replace_ReturnValue_4;                    // 0xEC8(0x10)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	double                                       CallFunc_Conv_StringToDouble_ReturnValue_3;        // 0xED8(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	double                                       CallFunc_Conv_StringToDouble_ReturnValue_4;        // 0xEE0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	float                                        K2Node_ComponentBoundEvent_InValue_46;             // 0xEE8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
	bool                                         Temp_bool_Variable_32;                             // 0xEEC(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify)
	uint8                                        Pad_599C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Loop_Counter_Variable_7;                  // 0xEF0(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, EditorOnly)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0xEF4(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_599D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue_9;                 // 0xEF8(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, EditorOnly)
	float                                        K2Node_ComponentBoundEvent_InValue_45;             // 0xEFC(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional, EditorOnly)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod_28;        // 0xF00(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, EditorOnly, NoDestructor)
	uint8                                        Pad_599E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        K2Node_ComponentBoundEvent_InValue_44;             // 0xF04(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue_5;          // 0xF08(0x18)(EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp, NonTransactional)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_5;          // 0xF20(0x10)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
	float                                        K2Node_ComponentBoundEvent_InValue_43;             // 0xF30(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, NonTransactional, EditorOnly)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod_27;        // 0xF34(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional, EditorOnly, NoDestructor)
	uint8                                        Pad_599F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Replace_ReturnValue_5;                    // 0xF38(0x10)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp, NonTransactional)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue_6;          // 0xF48(0x18)(EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional)
	double                                       CallFunc_Conv_StringToDouble_ReturnValue_5;        // 0xF60(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_6;          // 0xF68(0x10)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
	class FString                                CallFunc_Replace_ReturnValue_6;                    // 0xF78(0x10)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
	double                                       CallFunc_Conv_StringToDouble_ReturnValue_6;        // 0xF88(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
	float                                        K2Node_ComponentBoundEvent_InValue_42;             // 0xF90(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly)
	float                                        K2Node_ComponentBoundEvent_InValue_41;             // 0xF94(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, Interp, EditorOnly)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod_26;        // 0xF98(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly, NoDestructor)
	uint8                                        Pad_59A0[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        K2Node_ComponentBoundEvent_InValue_40;             // 0xF9C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, EditorOnly)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue_7;          // 0xFA0(0x18)(EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, EditorOnly)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_7;          // 0xFB8(0x10)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, EditorOnly)
	class FString                                CallFunc_Replace_ReturnValue_7;                    // 0xFC8(0x10)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, EditorOnly)
	double                                       CallFunc_Conv_StringToDouble_ReturnValue_7;        // 0xFD8(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, EditorOnly)
	bool                                         Temp_bool_Variable_33;                             // 0xFE0(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_59A1[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        K2Node_ComponentBoundEvent_InValue_39;             // 0xFE4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, EditorOnly)
	float                                        K2Node_ComponentBoundEvent_InValue_38;             // 0xFE8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod_25;        // 0xFEC(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly, NoDestructor)
	uint8                                        Pad_59A2[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue_8;          // 0xFF0(0x18)(EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, EditorOnly)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_8;          // 0x1008(0x10)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
	class FString                                CallFunc_Replace_ReturnValue_8;                    // 0x1018(0x10)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, EditorOnly)
	float                                        K2Node_ComponentBoundEvent_InValue_37;             // 0x1028(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional)
	uint8                                        Pad_59A3[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Conv_StringToDouble_ReturnValue_8;        // 0x1030(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
	float                                        K2Node_ComponentBoundEvent_InValue_36;             // 0x1038(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod_24;        // 0x103C(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly, NoDestructor)
	bool                                         Temp_bool_Variable_34;                             // 0x103D(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_59A4[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue_9;          // 0x1040(0x18)(EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp, EditorOnly)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_9;          // 0x1058(0x10)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
	class FString                                CallFunc_Replace_ReturnValue_9;                    // 0x1068(0x10)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp, EditorOnly)
	double                                       CallFunc_Conv_StringToDouble_ReturnValue_9;        // 0x1078(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
	float                                        K2Node_ComponentBoundEvent_InValue_35;             // 0x1080(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, NonTransactional)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod_23;        // 0x1084(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, EditorOnly, NoDestructor)
	uint8                                        Pad_59A5[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue_10;         // 0x1088(0x18)(EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp, EditorOnly)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_10;         // 0x10A0(0x10)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
	class FString                                CallFunc_Replace_ReturnValue_10;                   // 0x10B0(0x10)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly)
	float                                        K2Node_ComponentBoundEvent_InValue_34;             // 0x10C0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod_22;        // 0x10C4(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, NoDestructor)
	uint8                                        Pad_59A6[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Conv_StringToDouble_ReturnValue_10;       // 0x10C8(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue_11;         // 0x10D0(0x18)(EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, NonTransactional, EditorOnly)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_11;         // 0x10E8(0x10)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional, EditorOnly)
	class FString                                CallFunc_Replace_ReturnValue_11;                   // 0x10F8(0x10)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, NonTransactional, EditorOnly)
	float                                        K2Node_ComponentBoundEvent_InValue_33;             // 0x1108(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, Interp)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod_21;        // 0x110C(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, NoDestructor)
	uint8                                        Pad_59A7[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Conv_StringToDouble_ReturnValue_11;       // 0x1110(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, NonTransactional, EditorOnly)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue_12;         // 0x1118(0x18)(EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
	float                                        K2Node_ComponentBoundEvent_InValue_32;             // 0x1130(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod_20;        // 0x1134(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
	uint8                                        Pad_59A8[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Conv_TextToString_ReturnValue_12;         // 0x1138(0x10)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue_13;         // 0x1148(0x18)(EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp, NonTransactional, EditorOnly)
	class FString                                CallFunc_Replace_ReturnValue_12;                   // 0x1160(0x10)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_13;         // 0x1170(0x10)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, EditorOnly)
	double                                       CallFunc_Conv_StringToDouble_ReturnValue_12;       // 0x1180(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
	class FString                                CallFunc_Replace_ReturnValue_13;                   // 0x1188(0x10)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp, NonTransactional, EditorOnly)
	double                                       CallFunc_Conv_StringToDouble_ReturnValue_13;       // 0x1198(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, EditorOnly)
	int32                                        CallFunc_Array_Length_ReturnValue_10;              // 0x11A0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, EditorOnly)
	float                                        K2Node_ComponentBoundEvent_InValue_31;             // 0x11A4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod_19;        // 0x11A8(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional, NoDestructor)
	uint8                                        Pad_59A9[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue_14;         // 0x11B0(0x18)(EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_14;         // 0x11C8(0x10)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
	class FString                                CallFunc_Replace_ReturnValue_14;                   // 0x11D8(0x10)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
	double                                       CallFunc_Conv_StringToDouble_ReturnValue_14;       // 0x11E8(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
	class UObject*                               CallFunc_SelectObject_ReturnValue;                 // 0x11F0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UMaterialInterface*                    K2Node_DynamicCast_AsMaterial_Interface;           // 0x11F8(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1200(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_59AA[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_K2_GetComponentScale_ReturnValue;         // 0x1208(0x18)(Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x1220(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FLinearColor                          CallFunc_Conv_VectorToLinearColor_ReturnValue;     // 0x1238(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	struct FLinearColor                          CallFunc_Conv_VectorToLinearColor_ReturnValue_1;   // 0x1248(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference, Interp)
	class UTextureRenderTarget2D*                CallFunc_Map_Find_Value;                           // 0x1258(0x8)(Edit, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x1260(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_59AB[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UTextureRenderTarget2D*                CallFunc_Map_Find_Value_1;                         // 0x1268(0x8)(Edit, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x1270(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_59AC[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UTextureRenderTarget2D*                CallFunc_Map_Find_Value_2;                         // 0x1278(0x8)(Edit, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_Map_Find_ReturnValue_2;                   // 0x1280(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_59AD[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UTextureRenderTarget2D*                CallFunc_Map_Find_Value_3;                         // 0x1288(0x8)(Edit, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, NonTransactional)
	bool                                         CallFunc_Map_Find_ReturnValue_3;                   // 0x1290(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
	bool                                         Temp_bool_Variable_35;                             // 0x1291(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	uint8                                        Pad_59AE[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue_11;              // 0x1294(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional, EditorOnly)
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_3;         // 0x1298(0x10)(Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_3;        // 0x12A8(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x12A9(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x12AA(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0x12AB(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
	bool                                         Temp_bool_Variable_36;                             // 0x12AC(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
	uint8                                        Pad_59AF[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x12B0(0x8)(EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	TArray<class FName>                          K2Node_MakeArray_Array_2;                          // 0x12B8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	class UMaterialInstanceDynamic*              K2Node_Select_Default;                             // 0x12C8(0x8)(Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue_1;          // 0x12D0(0x8)(EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	TArray<class FName>                          K2Node_MakeArray_Array_3;                          // 0x12D8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference, NonTransactional)
	class FString                                CallFunc_Array_Get_Item_9;                         // 0x12E8(0x10)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp, EditorOnly)
	int32                                        CallFunc_Array_Length_ReturnValue_12;              // 0x12F8(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
	uint8                                        Pad_59B0[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UTextureRenderTarget2D*                CallFunc_Map_Find_Value_4;                         // 0x1300(0x8)(Edit, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_Map_Find_ReturnValue_4;                   // 0x1308(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_Less_IntInt_ReturnValue_3;                // 0x1309(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
	uint8                                        Pad_59B1[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Abs_ReturnValue;                          // 0x1310(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x1318(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_59B2[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Abs_ReturnValue_1;                        // 0x1320(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue_1;          // 0x1328(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference, Interp)
	uint8                                        Pad_59B3[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateColor                           K2Node_Select_Default_1;                           // 0x132C(0x14)(Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	struct FSlateColor                           K2Node_Select_Default_2;                           // 0x1340(0x14)(Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_59B4[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Abs_ReturnValue_2;                        // 0x1358(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue_2;          // 0x1360(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_59B5[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateColor                           K2Node_Select_Default_3;                           // 0x1364(0x14)(Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	double                                       CallFunc_Abs_ReturnValue_3;                        // 0x1378(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue_3;          // 0x1380(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference, NonTransactional)
	uint8                                        Pad_59B6[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Array_Index_Variable_9;                   // 0x1384(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, Interp, EditorOnly)
	class UMaterialInterface*                    CallFunc_Array_Get_Item_10;                        // 0x1388(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp, EditorOnly)
	struct FSlateColor                           K2Node_Select_Default_4;                           // 0x1390(0x14)(Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
	uint8                                        Pad_59B7[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_GetDisplayName_ReturnValue_4;             // 0x13A8(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	class UMaterialInterface*                    CallFunc_Array_Get_Item_11;                        // 0x13B8(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, NonTransactional, EditorOnly)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x13C0(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_59B8[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x13C8(0x8)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable_8;                  // 0x13D0(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, EditorOnly)
	int32                                        Temp_int_Loop_Counter_Variable_9;                  // 0x13D4(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, Interp, EditorOnly)
	bool                                         CallFunc_Less_IntInt_ReturnValue_4;                // 0x13D8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
	uint8                                        Pad_59B9[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue_10;                // 0x13DC(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, EditorOnly)
	bool                                         CallFunc_Less_IntInt_ReturnValue_5;                // 0x13E0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
	uint8                                        Pad_59BA[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue_11;                // 0x13E4(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional, EditorOnly)
	bool                                         Temp_bool_Variable_37;                             // 0x13E8(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
	uint8                                        Pad_59BB[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x13F0(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Abs_ReturnValue_4;                        // 0x1408(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	double                                       CallFunc_Abs_ReturnValue_5;                        // 0x1410(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue_4;          // 0x1418(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue_5;          // 0x1419(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference, Interp, NonTransactional)
	uint8                                        Pad_59BC[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateColor                           K2Node_Select_Default_5;                           // 0x141C(0x14)(Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
	struct FSlateColor                           K2Node_Select_Default_6;                           // 0x1430(0x14)(Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
	int32                                        Temp_int_Array_Index_Variable_10;                  // 0x1444(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp, EditorOnly)
	class FString                                CallFunc_Array_Get_Item_12;                        // 0x1448(0x10)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
	float                                        K2Node_ComponentBoundEvent_InValue_30;             // 0x1458(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor)
	float                                        K2Node_ComponentBoundEvent_InValue_29;             // 0x145C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional, EditorOnly, NoDestructor)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod_18;        // 0x1460(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NoDestructor)
	uint8                                        Pad_59BD[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue_15;         // 0x1468(0x18)(EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, NoDestructor)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_15;         // 0x1480(0x10)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, NoDestructor)
	class FString                                CallFunc_Replace_ReturnValue_15;                   // 0x1490(0x10)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, NoDestructor)
	double                                       CallFunc_Conv_StringToDouble_ReturnValue_15;       // 0x14A0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, NoDestructor)
	float                                        K2Node_ComponentBoundEvent_InValue_28;             // 0x14A8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional, EditorOnly, NoDestructor)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod_17;        // 0x14AC(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NoDestructor)
	uint8                                        Pad_59BE[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue_16;         // 0x14B0(0x18)(EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, NoDestructor)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_16;         // 0x14C8(0x10)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NoDestructor)
	float                                        K2Node_ComponentBoundEvent_InValue_27;             // 0x14D8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, NonTransactional, EditorOnly, NoDestructor)
	uint8                                        Pad_59BF[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Replace_ReturnValue_16;                   // 0x14E0(0x10)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, NoDestructor)
	double                                       CallFunc_Conv_StringToDouble_ReturnValue_16;       // 0x14F0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NoDestructor)
	float                                        K2Node_ComponentBoundEvent_InValue_26;             // 0x14F8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly, NoDestructor)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod_16;        // 0x14FC(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NoDestructor)
	uint8                                        Pad_59C0[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue_17;         // 0x1500(0x18)(EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp, NoDestructor)
	int32                                        Temp_int_Array_Index_Variable_11;                  // 0x1518(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional, EditorOnly)
	uint8                                        Pad_59C1[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Conv_TextToString_ReturnValue_17;         // 0x1520(0x10)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NoDestructor)
	class UMaterialInterface*                    CallFunc_Array_Get_Item_13;                        // 0x1530(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp, NonTransactional, EditorOnly)
	class FString                                CallFunc_Replace_ReturnValue_17;                   // 0x1538(0x10)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp, NoDestructor)
	class FString                                CallFunc_GetDisplayName_ReturnValue_5;             // 0x1548(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
	double                                       CallFunc_Conv_StringToDouble_ReturnValue_17;       // 0x1558(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bIsChecked;             // 0x1560(0x1)(Edit, ExportObject, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_59C2[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        K2Node_ComponentBoundEvent_InValue_25;             // 0x1564(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, Interp, EditorOnly, NoDestructor)
	float                                        K2Node_ComponentBoundEvent_InValue_24;             // 0x1568(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, EditorOnly, NoDestructor)
	float                                        K2Node_ComponentBoundEvent_InValue_23;             // 0x156C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, EditorOnly, NoDestructor)
	float                                        K2Node_ComponentBoundEvent_InValue_22;             // 0x1570(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, NoDestructor)
	float                                        K2Node_ComponentBoundEvent_InValue_21;             // 0x1574(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional, NoDestructor)
	float                                        K2Node_ComponentBoundEvent_InValue_20;             // 0x1578(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
	float                                        K2Node_ComponentBoundEvent_InValue_19;             // 0x157C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, NonTransactional, NoDestructor)
	float                                        K2Node_ComponentBoundEvent_InValue_18;             // 0x1580(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NoDestructor)
	float                                        K2Node_ComponentBoundEvent_InValue_17;             // 0x1584(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, Interp, NoDestructor)
	float                                        K2Node_ComponentBoundEvent_InValue_16;             // 0x1588(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, NoDestructor)
	float                                        K2Node_ComponentBoundEvent_InValue_15;             // 0x158C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, NoDestructor)
	int32                                        Temp_int_Loop_Counter_Variable_10;                 // 0x1590(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp, EditorOnly)
	bool                                         CallFunc_Less_IntInt_ReturnValue_6;                // 0x1594(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
	uint8                                        Pad_59C3[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue_12;                // 0x1598(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
	int32                                        Temp_int_Array_Index_Variable_12;                  // 0x159C(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
	int32                                        Temp_int_Array_Index_Variable_13;                  // 0x15A0(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, Interp, NonTransactional, EditorOnly)
	uint8                                        Pad_59C4[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CallFunc_Array_Get_Item_14;                        // 0x15A8(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
	struct FAssetData                            CallFunc_Array_Get_Item_15;                        // 0x15B0(0x68)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, NoDestructor)
	class FString                                CallFunc_GetDisplayName_ReturnValue_6;             // 0x1618(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
	class FString                                CallFunc_Conv_NameToString_ReturnValue_2;          // 0x1628(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_2;          // 0x1638(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_3;          // 0x1639(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	uint8                                        Pad_59C5[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_RightChop_ReturnValue_2;                  // 0x1640(0x10)(ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_Contains_ReturnValue;                     // 0x1650(0x1)(ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_59C6[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x1658(0x10)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
	class FString                                K2Node_Select_Default_7;                           // 0x1668(0x10)(Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, EditorOnly)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x1678(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	float                                        K2Node_ComponentBoundEvent_InValue_14;             // 0x167C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod_15;        // 0x1680(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, NoDestructor)
	uint8                                        Pad_59C7[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        K2Node_ComponentBoundEvent_InValue_13;             // 0x1684(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional, EditorOnly)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod_14;        // 0x1688(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
	uint8                                        Pad_59C8[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue_18;         // 0x1690(0x18)(EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp, NoDestructor)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue_19;         // 0x16A8(0x18)(EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, NonTransactional, NoDestructor)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_18;         // 0x16C0(0x10)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NoDestructor)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_19;         // 0x16D0(0x10)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional, NoDestructor)
	class FString                                CallFunc_Replace_ReturnValue_18;                   // 0x16E0(0x10)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, Interp, NoDestructor)
	class FString                                CallFunc_Replace_ReturnValue_19;                   // 0x16F0(0x10)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, NonTransactional, NoDestructor)
	double                                       CallFunc_Conv_StringToDouble_ReturnValue_18;       // 0x1700(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NoDestructor)
	double                                       CallFunc_Conv_StringToDouble_ReturnValue_19;       // 0x1708(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, NonTransactional, NoDestructor)
	class FText                                  K2Node_ComponentBoundEvent_Text;                   // 0x1710(0x18)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod_13;        // 0x1728(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, EditorOnly)
	uint8                                        Pad_59C9[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Conv_TextToString_ReturnValue_20;         // 0x1730(0x10)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
	float                                        K2Node_ComponentBoundEvent_InValue_12;             // 0x1740(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod_12;        // 0x1744(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
	uint8                                        Pad_59CA[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue_20;         // 0x1748(0x18)(EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_21;         // 0x1760(0x10)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, NoDestructor)
	class FString                                CallFunc_Replace_ReturnValue_20;                   // 0x1770(0x10)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
	double                                       CallFunc_Conv_StringToDouble_ReturnValue_20;       // 0x1780(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
	int32                                        Temp_int_Loop_Counter_Variable_11;                 // 0x1788(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional, EditorOnly)
	bool                                         CallFunc_Less_IntInt_ReturnValue_7;                // 0x178C(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, EditorOnly)
	uint8                                        Pad_59CB[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue_13;                // 0x1790(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional, EditorOnly)
	class FName                                  CallFunc_Array_Get_Item_16;                        // 0x1794(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, NoDestructor)
	int32                                        CallFunc_Array_Length_ReturnValue_13;              // 0x179C(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional, EditorOnly)
	class FString                                CallFunc_Conv_NameToString_ReturnValue_3;          // 0x17A0(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	bool                                         CallFunc_Less_IntInt_ReturnValue_8;                // 0x17B0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, EditorOnly)
	uint8                                        Pad_59CC[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x17B8(0x10)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
	class FString                                CallFunc_GetSelectedOption_ReturnValue;            // 0x17C8(0x10)(BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  CallFunc_Array_Get_Item_17;                        // 0x17D8(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp, NoDestructor)
	int32                                        CallFunc_Array_Length_ReturnValue_14;              // 0x17E0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
	uint8                                        Pad_59CD[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Conv_NameToString_ReturnValue_4;          // 0x17E8(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_Less_IntInt_ReturnValue_9;                // 0x17F8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, EditorOnly)
	uint8                                        Pad_59CE[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x1800(0x10)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, NonTransactional)
	class FString                                CallFunc_GetSelectedOption_ReturnValue_1;          // 0x1810(0x10)(BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         Temp_bool_Variable_38;                             // 0x1820(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
	uint8                                        Pad_59CF[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TScriptInterface<class IAssetRegistry>       CallFunc_GetAssetRegistry_ReturnValue_1;           // 0x1828(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference, Interp)
	TArray<struct FAssetData>                    CallFunc_GetAssetsByPackageName_OutAssetData;      // 0x1838(0x10)(BlueprintReadOnly, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_GetAssetsByPackageName_ReturnValue;       // 0x1848(0x1)(Edit, ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_59D0[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FAssetData                            CallFunc_Array_Get_Item_18;                        // 0x1850(0x68)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp, NoDestructor)
	class UObject*                               CallFunc_GetAsset_ReturnValue;                     // 0x18B8(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class FString                                CallFunc_Conv_NameToString_ReturnValue_5;          // 0x18C0(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x18D0(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_4;          // 0x18D1(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	uint8                                        Pad_59D1[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D;                   // 0x18D8(0x8)(ConstParm, ExportObject, Net, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x18E0(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
	uint8                                        Pad_59D3[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Conv_NameToString_ReturnValue_6;          // 0x18E8(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
	bool                                         Temp_bool_Variable_39;                             // 0x18F8(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, EditorOnly)
	uint8                                        Pad_59D5[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TSet<class FName>                            K2Node_MakeSet_Set_1;                              // 0x1900(0x50)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, Interp)
	TArray<class FName>                          K2Node_MakeArray_Array_4;                          // 0x1950(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	TArray<class FName>                          K2Node_MakeArray_Array_5;                          // 0x1960(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
	int32                                        Temp_int_Loop_Counter_Variable_12;                 // 0x1970(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
	uint8                                        Pad_59D7[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FARFilter                             CallFunc_MakeARFilter_ReturnValue_1;               // 0x1978(0x150)(ConstParm, BlueprintReadOnly, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_Less_IntInt_ReturnValue_10;               // 0x1AC8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, EditorOnly)
	uint8                                        Pad_59D9[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue_14;                // 0x1ACC(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
	TScriptInterface<class IAssetRegistry>       CallFunc_GetAssetRegistry_ReturnValue_2;           // 0x1AD0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
	int32                                        Temp_int_Loop_Counter_Variable_13;                 // 0x1AE0(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, Interp, NonTransactional, EditorOnly)
	uint8                                        Pad_59DA[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FAssetData>                    CallFunc_GetAssets_OutAssetData_1;                 // 0x1AE8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_GetAssets_ReturnValue_1;                  // 0x1AF8(0x1)(DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_59DC[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FAssetData                            CallFunc_Array_Get_Item_19;                        // 0x1B00(0x68)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, NonTransactional, NoDestructor)
	int32                                        CallFunc_Array_Length_ReturnValue_15;              // 0x1B68(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_11;               // 0x1B6C(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional, EditorOnly)
	uint8                                        Pad_59DD[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Conv_NameToString_ReturnValue_7;          // 0x1B70(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, EditorOnly)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_5;          // 0x1B80(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
	uint8                                        Pad_59DE[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x1B84(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_Not_PreBool_ReturnValue_4;                // 0x1B88(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_Less_IntInt_ReturnValue_12;               // 0x1B89(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
	uint8                                        Pad_59DF[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue_15;                // 0x1B8C(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, NoDestructor)
	TScriptInterface<class IAssetRegistry>       CallFunc_GetAssetRegistry_ReturnValue_3;           // 0x1B90(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference, NonTransactional)
	TSet<class FName>                            K2Node_MakeSet_Set_2;                              // 0x1BA0(0x50)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
	TArray<struct FAssetData>                    CallFunc_GetAssetsByPackageName_OutAssetData_1;    // 0x1BF0(0x10)(BlueprintReadOnly, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_GetAssetsByPackageName_ReturnValue_1;     // 0x1C00(0x1)(Edit, ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_59E0[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          K2Node_MakeArray_Array_6;                          // 0x1C08(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
	struct FAssetData                            CallFunc_Array_Get_Item_20;                        // 0x1C18(0x68)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
	TArray<class FName>                          K2Node_MakeArray_Array_7;                          // 0x1C80(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference, EditorOnly)
	struct FARFilter                             CallFunc_MakeARFilter_ReturnValue_2;               // 0x1C90(0x150)(ConstParm, BlueprintReadOnly, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
	class FString                                CallFunc_Conv_NameToString_ReturnValue_8;          // 0x1DE0(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
	class FString                                CallFunc_Conv_NameToString_ReturnValue_9;          // 0x1DF0(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_6;          // 0x1E00(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
	uint8                                        Pad_59E1[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               CallFunc_GetAsset_ReturnValue_1;                   // 0x1E08(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x1E10(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_59E2[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D_1;                 // 0x1E18(0x8)(ConstParm, ExportObject, Net, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference, Interp)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x1E20(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_59E3[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TScriptInterface<class IAssetRegistry>       CallFunc_GetAssetRegistry_ReturnValue_4;           // 0x1E28(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	TArray<struct FAssetData>                    CallFunc_GetAssets_OutAssetData_2;                 // 0x1E38(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_GetAssets_ReturnValue_2;                  // 0x1E48(0x1)(DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_59E4[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FAssetData                            CallFunc_Array_Get_Item_21;                        // 0x1E50(0x68)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp, NonTransactional, NoDestructor)
	int32                                        CallFunc_Array_Length_ReturnValue_16;              // 0x1EB8(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_13;               // 0x1EBC(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional, EditorOnly)
	uint8                                        Pad_59E5[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Conv_NameToString_ReturnValue_10;         // 0x1EC0(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_7;          // 0x1ED0(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, EditorOnly)
	bool                                         CallFunc_Not_PreBool_ReturnValue_5;                // 0x1ED1(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
	uint8                                        Pad_59E7[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Add_ReturnValue_2;                  // 0x1ED4(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_2;         // 0x1ED8(0x10)(Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_2;        // 0x1EE8(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x1EE9(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
	uint8                                        Pad_59E9[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0x1EF0(0x10)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, NonTransactional)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_5;              // 0x1F00(0x10)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp, NonTransactional)
	class FString                                CallFunc_SelectString_ReturnValue_1;               // 0x1F10(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_Contains_ReturnValue_1;                   // 0x1F20(0x1)(ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_8;          // 0x1F21(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
	uint8                                        Pad_59EA[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_1;         // 0x1F28(0x10)(Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_1;        // 0x1F38(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_Not_PreBool_ReturnValue_6;                // 0x1F39(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x1F3A(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
	uint8                                        Pad_59EC[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Concat_StrStr_ReturnValue_6;              // 0x1F40(0x10)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp, NonTransactional)
	class FString                                CallFunc_SelectString_ReturnValue_2;               // 0x1F50(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_7;              // 0x1F60(0x10)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, EditorOnly)
	bool                                         CallFunc_Contains_ReturnValue_2;                   // 0x1F70(0x1)(ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_9;          // 0x1F71(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
	bool                                         CallFunc_Not_PreBool_ReturnValue_7;                // 0x1F72(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, EditorOnly)
	uint8                                        Pad_59EE[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_ComponentBoundEvent_SelectedItem;           // 0x1F78(0x10)(Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType;          // 0x1F88(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_5;        // 0x1F89(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_10;         // 0x1F8A(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_11;         // 0x1F8B(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, NonTransactional, EditorOnly)
	bool                                         CallFunc_Not_PreBool_ReturnValue_8;                // 0x1F8C(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, EditorOnly)
	uint8                                        Pad_59EF[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        K2Node_ComponentBoundEvent_InValue_11;             // 0x1F90(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, NonTransactional, EditorOnly)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod_11;        // 0x1F94(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional, EditorOnly)
	uint8                                        Pad_59F0[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue_21;         // 0x1F98(0x18)(EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp, NonTransactional, NoDestructor)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_22;         // 0x1FB0(0x10)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, NoDestructor)
	int32                                        Temp_int_Array_Index_Variable_14;                  // 0x1FC0(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
	uint8                                        Pad_59F1[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Replace_ReturnValue_21;                   // 0x1FC8(0x10)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp, NonTransactional, NoDestructor)
	class AActor*                                CallFunc_Array_Get_Item_22;                        // 0x1FD8(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp, NonTransactional, NoDestructor)
	double                                       CallFunc_Conv_StringToDouble_ReturnValue_21;       // 0x1FE0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, NoDestructor)
	class FString                                CallFunc_GetDisplayName_ReturnValue_7;             // 0x1FE8(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, EditorOnly)
	float                                        K2Node_ComponentBoundEvent_InValue_10;             // 0x1FF8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod_10;        // 0x1FFC(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
	uint8                                        Pad_59F2[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        K2Node_ComponentBoundEvent_InValue_9;              // 0x2000(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, Interp, EditorOnly)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod_9;         // 0x2004(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
	uint8                                        Pad_59F3[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue_22;         // 0x2008(0x18)(EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional, NoDestructor)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue_23;         // 0x2020(0x18)(EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, EditorOnly, NoDestructor)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_23;         // 0x2038(0x10)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, EditorOnly, NoDestructor)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_24;         // 0x2048(0x10)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly, NoDestructor)
	class FString                                CallFunc_Replace_ReturnValue_22;                   // 0x2058(0x10)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, NoDestructor)
	class FString                                CallFunc_Replace_ReturnValue_23;                   // 0x2068(0x10)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, EditorOnly, NoDestructor)
	double                                       CallFunc_Conv_StringToDouble_ReturnValue_22;       // 0x2078(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, NoDestructor)
	double                                       CallFunc_Conv_StringToDouble_ReturnValue_23;       // 0x2080(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, EditorOnly, NoDestructor)
	float                                        K2Node_ComponentBoundEvent_InValue_8;              // 0x2088(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, EditorOnly)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod_8;         // 0x208C(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
	uint8                                        Pad_59F4[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        K2Node_ComponentBoundEvent_InValue_7;              // 0x2090(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, EditorOnly)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod_7;         // 0x2094(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, EditorOnly)
	uint8                                        Pad_59F5[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue_24;         // 0x2098(0x18)(EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, EditorOnly, NoDestructor)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue_25;         // 0x20B0(0x18)(EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp, EditorOnly, NoDestructor)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_25;         // 0x20C8(0x10)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly, NoDestructor)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_26;         // 0x20D8(0x10)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly, NoDestructor)
	class FString                                CallFunc_Replace_ReturnValue_24;                   // 0x20E8(0x10)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, EditorOnly, NoDestructor)
	class FString                                CallFunc_Replace_ReturnValue_25;                   // 0x20F8(0x10)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp, EditorOnly, NoDestructor)
	double                                       CallFunc_Conv_StringToDouble_ReturnValue_24;       // 0x2108(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly, NoDestructor)
	double                                       CallFunc_Conv_StringToDouble_ReturnValue_25;       // 0x2110(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly, NoDestructor)
	float                                        K2Node_ComponentBoundEvent_InValue_6;              // 0x2118(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod_6;         // 0x211C(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
	uint8                                        Pad_59F6[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        K2Node_ComponentBoundEvent_InValue_5;              // 0x2120(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod_5;         // 0x2124(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
	uint8                                        Pad_59F7[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue_26;         // 0x2128(0x18)(EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp, EditorOnly, NoDestructor)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue_27;         // 0x2140(0x18)(EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, NonTransactional, EditorOnly, NoDestructor)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_27;         // 0x2158(0x10)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional, EditorOnly, NoDestructor)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_28;         // 0x2168(0x10)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, EditorOnly, NoDestructor)
	class FString                                CallFunc_Replace_ReturnValue_26;                   // 0x2178(0x10)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly, NoDestructor)
	class FString                                CallFunc_Replace_ReturnValue_27;                   // 0x2188(0x10)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, NonTransactional, EditorOnly, NoDestructor)
	double                                       CallFunc_Conv_StringToDouble_ReturnValue_26;       // 0x2198(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly, NoDestructor)
	double                                       CallFunc_Conv_StringToDouble_ReturnValue_27;       // 0x21A0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, NonTransactional, EditorOnly, NoDestructor)
	float                                        K2Node_ComponentBoundEvent_InValue_4;              // 0x21A8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod_4;         // 0x21AC(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	uint8                                        Pad_59F8[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        K2Node_ComponentBoundEvent_InValue_3;              // 0x21B0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, NonTransactional)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod_3;         // 0x21B4(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	uint8                                        Pad_59F9[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue_28;         // 0x21B8(0x18)(EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, NonTransactional, EditorOnly, NoDestructor)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue_29;         // 0x21D0(0x18)(EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp, NonTransactional, EditorOnly, NoDestructor)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_29;         // 0x21E8(0x10)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, EditorOnly, NoDestructor)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_30;         // 0x21F8(0x10)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor)
	class FString                                CallFunc_Replace_ReturnValue_28;                   // 0x2208(0x10)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, NonTransactional, EditorOnly, NoDestructor)
	class FString                                CallFunc_Replace_ReturnValue_29;                   // 0x2218(0x10)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp, NonTransactional, EditorOnly, NoDestructor)
	double                                       CallFunc_Conv_StringToDouble_ReturnValue_28;       // 0x2228(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, EditorOnly, NoDestructor)
	double                                       CallFunc_Conv_StringToDouble_ReturnValue_29;       // 0x2230(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, EditorOnly, NoDestructor)
	float                                        K2Node_ComponentBoundEvent_InValue_2;              // 0x2238(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod_2;         // 0x223C(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_59FA[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        K2Node_ComponentBoundEvent_InValue_1;              // 0x2240(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, Interp)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod_1;         // 0x2244(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_59FB[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue_30;         // 0x2248(0x18)(EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue_31;         // 0x2260(0x18)(EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_31;         // 0x2278(0x10)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_32;         // 0x2288(0x10)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify)
	class FString                                CallFunc_Replace_ReturnValue_30;                   // 0x2298(0x10)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor)
	class FString                                CallFunc_Replace_ReturnValue_31;                   // 0x22A8(0x10)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       CallFunc_Conv_StringToDouble_ReturnValue_30;       // 0x22B8(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor)
	double                                       CallFunc_Conv_StringToDouble_ReturnValue_31;       // 0x22C0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	float                                        K2Node_ComponentBoundEvent_InValue;                // 0x22C8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod;           // 0x22CC(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_59FC[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue_32;         // 0x22D0(0x18)(EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify)
	class FName                                  Temp_name_Variable;                                // 0x22E8(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_33;         // 0x22F0(0x10)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	class FString                                CallFunc_Replace_ReturnValue_32;                   // 0x2300(0x10)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x2310(0x1)(Edit, ConstParm, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_59FD[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Conv_StringToDouble_ReturnValue_32;       // 0x2318(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify)
	bool                                         Temp_bool_Variable_40;                             // 0x2320(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, EditorOnly)
	uint8                                        Pad_59FE[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  Temp_name_Variable_1;                              // 0x2324(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	int32                                        CallFunc_Array_Add_ReturnValue_3;                  // 0x232C(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	class FName                                  Temp_name_Variable_2;                              // 0x2330(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	class FName                                  Temp_name_Variable_3;                              // 0x2338(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	bool                                         CallFunc_Array_Contains_ReturnValue_1;             // 0x2340(0x1)(Edit, ConstParm, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_59FF[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Add_ReturnValue_4;                  // 0x2344(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2348(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x2349(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         Temp_bool_Variable_41;                             // 0x234A(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, EditorOnly)
	uint8                                        Pad_5A00[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x2350(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	enum class ESlateVisibility                  K2Node_Select_Default_8;                           // 0x2358(0x1)(Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, EditorOnly)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue_6;          // 0x2359(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp, NonTransactional)
	uint8                                        Pad_5A01[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                Temp_string_Variable_6;                            // 0x2360(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
	class FString                                Temp_string_Variable_7;                            // 0x2370(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, EditorOnly)
	class UTextureRenderTarget2D*                CallFunc_Map_Find_Value_5;                         // 0x2380(0x8)(Edit, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
	bool                                         CallFunc_Map_Find_ReturnValue_5;                   // 0x2388(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
	uint8                                        Pad_5A02[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UTextureRenderTarget2D*                CallFunc_Map_Find_Value_6;                         // 0x2390(0x8)(Edit, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
	bool                                         CallFunc_Map_Find_ReturnValue_6;                   // 0x2398(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
	uint8                                        Pad_5A03[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class ANinjaLive_PresetManager_C*>    CallFunc_GetAllActorsOfClass_OutActors_3;          // 0x23A0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference, NonTransactional)
	class ANinjaLive_PresetManager_C*            CallFunc_Array_Get_Item_23;                        // 0x23B0(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, EditorOnly, NoDestructor)
	class FString                                CallFunc_MakeLiteralString_ReturnValue;            // 0x23B8(0x10)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_12;         // 0x23C8(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
	uint8                                        Pad_5A04[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Loop_Counter_Variable_14;                 // 0x23CC(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
	bool                                         CallFunc_Less_IntInt_ReturnValue_14;               // 0x23D0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
	uint8                                        Pad_5A05[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue_16;                // 0x23D4(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NoDestructor)
	float                                        CallFunc_Delay_Duration_ImplicitCast;              // 0x23D8(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5A06[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x23E0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       CallFunc_Conv_DoubleToText_Value_ImplicitCast;     // 0x23E8(0x8)(Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast;           // 0x23F0(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5A07[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Conv_DoubleToText_Value_ImplicitCast_1;   // 0x23F8(0x8)(Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp)
	double                                       CallFunc_Conv_DoubleToText_Value_ImplicitCast_2;   // 0x2400(0x8)(Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, Interp)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_1;         // 0x2408(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, Interp)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_2;         // 0x240C(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
	double                                       K2Node_VariableSet_Divergence_ImplicitCast;        // 0x2410(0x8)(Edit, ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	double                                       CallFunc_Conv_DoubleToText_Value_ImplicitCast_3;   // 0x2418(0x8)(Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, NonTransactional)
	double                                       CallFunc_Conv_DoubleToText_Value_ImplicitCast_4;   // 0x2420(0x8)(Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_3;         // 0x2428(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, NonTransactional)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_4;         // 0x242C(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	double                                       K2Node_VariableSet_FlowFeedback_ImplicitCast;      // 0x2430(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	double                                       CallFunc_Conv_DoubleToText_Value_ImplicitCast_5;   // 0x2438(0x8)(Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp, NonTransactional)
	double                                       K2Node_VariableSet_DensityInputNoiseTile_ImplicitCast; // 0x2440(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	double                                       CallFunc_Conv_DoubleToText_Value_ImplicitCast_6;   // 0x2448(0x8)(Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_5;         // 0x2450(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_6;         // 0x2454(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
	double                                       K2Node_VariableSet_DensityInputNoiseOffset_ImplicitCast; // 0x2458(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, Transient, EditConst, InstancedReference, SubobjectReference)
	double                                       CallFunc_Conv_DoubleToText_Value_ImplicitCast_7;   // 0x2460(0x8)(Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, EditorOnly)
	double                                       K2Node_VariableSet_DensityInputNoiseAmp_ImplicitCast; // 0x2468(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_7;         // 0x2470(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, EditorOnly)
	uint8                                        Pad_5A08[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       K2Node_VariableSet_VeloInputOffsetSpeed_ImplicitCast; // 0x2478(0x8)(Edit, BlueprintVisible, Parm, Config, EditConst, InstancedReference, SubobjectReference)
	double                                       CallFunc_Conv_DoubleToText_Value_ImplicitCast_8;   // 0x2480(0x8)(Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, EditorOnly)
	double                                       K2Node_VariableSet_VeloInputTile_ImplicitCast;     // 0x2488(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_8;         // 0x2490(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, EditorOnly)
	uint8                                        Pad_5A09[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Conv_DoubleToText_Value_ImplicitCast_9;   // 0x2498(0x8)(Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp, EditorOnly)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_9;         // 0x24A0(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, Interp, EditorOnly)
	uint8                                        Pad_5A0A[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Conv_DoubleToText_Value_ImplicitCast_10;  // 0x24A8(0x8)(Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly)
	double                                       CallFunc_Conv_DoubleToText_Value_ImplicitCast_11;  // 0x24B0(0x8)(Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, NonTransactional, EditorOnly)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_10;        // 0x24B8(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly)
	uint8                                        Pad_5A0B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Conv_DoubleToText_Value_ImplicitCast_12;  // 0x24C0(0x8)(Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_11;        // 0x24C8(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, NonTransactional, EditorOnly)
	uint8                                        Pad_5A0C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Conv_DoubleToText_Value_ImplicitCast_13;  // 0x24D0(0x8)(Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp, NonTransactional, EditorOnly)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_12;        // 0x24D8(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_13;        // 0x24DC(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional, EditorOnly)
	double                                       CallFunc_Conv_DoubleToText_Value_ImplicitCast_14;  // 0x24E0(0x8)(Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_14;        // 0x24E8(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_15;        // 0x24EC(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, NoDestructor)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_16;        // 0x24F0(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, NoDestructor)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_17;        // 0x24F4(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, Interp, NoDestructor)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_18;        // 0x24F8(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NoDestructor)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_19;        // 0x24FC(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, NonTransactional, NoDestructor)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_20;        // 0x2500(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_21;        // 0x2504(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional, NoDestructor)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_22;        // 0x2508(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, NoDestructor)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_23;        // 0x250C(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, EditorOnly, NoDestructor)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_24;        // 0x2510(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, EditorOnly, NoDestructor)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_25;        // 0x2514(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, Interp, EditorOnly, NoDestructor)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_26;        // 0x2518(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly, NoDestructor)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_27;        // 0x251C(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, NonTransactional, EditorOnly, NoDestructor)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_28;        // 0x2520(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional, EditorOnly, NoDestructor)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_29;        // 0x2524(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional, EditorOnly, NoDestructor)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_30;        // 0x2528(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_31;        // 0x252C(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_32;        // 0x2530(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_33;        // 0x2534(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, Interp)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_34;        // 0x2538(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_35;        // 0x253C(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, NonTransactional)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_36;        // 0x2540(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_37;        // 0x2544(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_38;        // 0x2548(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_39;        // 0x254C(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, EditorOnly)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_40;        // 0x2550(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, EditorOnly)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_41;        // 0x2554(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, Interp, EditorOnly)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_42;        // 0x2558(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_43;        // 0x255C(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, NonTransactional, EditorOnly)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_44;        // 0x2560(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_45;        // 0x2564(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional, EditorOnly)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_46;        // 0x2568(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_47;        // 0x256C(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, NoDestructor)
	double                                       K2Node_VariableSet_VeloDirNoise_ImplicitCast;      // 0x2570(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	double                                       CallFunc_Conv_DoubleToText_Value_ImplicitCast_15;  // 0x2578(0x8)(Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, NoDestructor)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_48;        // 0x2580(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, NoDestructor)
	uint8                                        Pad_5A0D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Conv_DoubleToText_Value_ImplicitCast_16;  // 0x2588(0x8)(Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, NoDestructor)
	double                                       K2Node_VariableSet_DensityTxtMult_ImplicitCast;    // 0x2590(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_49;        // 0x2598(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, Interp, NoDestructor)
	uint8                                        Pad_5A0E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Conv_DoubleToText_Value_ImplicitCast_17;  // 0x25A0(0x8)(Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp, NoDestructor)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_50;        // 0x25A8(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NoDestructor)
	uint8                                        Pad_5A0F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       K2Node_VariableSet_VeloDirNoiseSpeed_ImplicitCast; // 0x25B0(0x8)(ConstParm, ExportObject, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	double                                       K2Node_VariableSet_VeloDirNoiseSize_ImplicitCast;  // 0x25B8(0x8)(BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	double                                       K2Node_VariableSet_EdgeMaskWidth_ImplicitCast;     // 0x25C0(0x8)(Edit, ExportObject, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	double                                       K2Node_VariableSet_SimEdgeBouncyness_ImplicitCast; // 0x25C8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	double                                       K2Node_VariableSet_FadeDensityAtSimEdge_ImplicitCast; // 0x25D0(0x8)(ConstParm, BlueprintVisible, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	double                                       K2Node_VariableSet_InputFeedback_ImplicitCast;     // 0x25D8(0x8)(Edit, ConstParm, Parm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	double                                       K2Node_VariableSet_VeloAmpNoise_ImplicitCast;      // 0x25E0(0x8)(ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	double                                       K2Node_VariableSet_VeloStrength_ImplicitCast;      // 0x25E8(0x8)(BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	double                                       K2Node_VariableSet_VeloRotate_ImplicitCast;        // 0x25F0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	double                                       K2Node_VariableSet_VeloOffsetY_ImplicitCast;       // 0x25F8(0x8)(Edit, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	double                                       K2Node_VariableSet_VeloOffsetX_ImplicitCast;       // 0x2600(0x8)(Edit, Net, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	double                                       CallFunc_Conv_DoubleToText_Value_ImplicitCast_18;  // 0x2608(0x8)(Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, Interp, NoDestructor)
	double                                       CallFunc_Conv_DoubleToText_Value_ImplicitCast_19;  // 0x2610(0x8)(Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, NonTransactional, NoDestructor)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_51;        // 0x2618(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, NonTransactional, NoDestructor)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_52;        // 0x261C(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
	double                                       CallFunc_Conv_DoubleToText_Value_ImplicitCast_20;  // 0x2620(0x8)(Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_53;        // 0x2628(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional, NoDestructor)
	uint8                                        Pad_5A10[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Conv_DoubleToText_Value_ImplicitCast_21;  // 0x2630(0x8)(Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp, NonTransactional, NoDestructor)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_54;        // 0x2638(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, NoDestructor)
	uint8                                        Pad_5A11[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Conv_DoubleToText_Value_ImplicitCast_22;  // 0x2640(0x8)(Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, NoDestructor)
	double                                       CallFunc_Conv_DoubleToText_Value_ImplicitCast_23;  // 0x2648(0x8)(Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, EditorOnly, NoDestructor)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_55;        // 0x2650(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, EditorOnly, NoDestructor)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_56;        // 0x2654(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, EditorOnly, NoDestructor)
	double                                       CallFunc_Conv_DoubleToText_Value_ImplicitCast_24;  // 0x2658(0x8)(Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, EditorOnly, NoDestructor)
	double                                       CallFunc_Conv_DoubleToText_Value_ImplicitCast_25;  // 0x2660(0x8)(Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp, EditorOnly, NoDestructor)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_57;        // 0x2668(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, Interp, EditorOnly, NoDestructor)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_58;        // 0x266C(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly, NoDestructor)
	double                                       CallFunc_Conv_DoubleToText_Value_ImplicitCast_26;  // 0x2670(0x8)(Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly, NoDestructor)
	double                                       CallFunc_Conv_DoubleToText_Value_ImplicitCast_27;  // 0x2678(0x8)(Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, NonTransactional, EditorOnly, NoDestructor)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_59;        // 0x2680(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, NonTransactional, EditorOnly, NoDestructor)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_60;        // 0x2684(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional, EditorOnly, NoDestructor)
	double                                       CallFunc_Conv_DoubleToText_Value_ImplicitCast_28;  // 0x2688(0x8)(Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, NonTransactional, EditorOnly, NoDestructor)
	double                                       CallFunc_Conv_DoubleToText_Value_ImplicitCast_29;  // 0x2690(0x8)(Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp, NonTransactional, EditorOnly, NoDestructor)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_61;        // 0x2698(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional, EditorOnly, NoDestructor)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_62;        // 0x269C(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor)
	double                                       CallFunc_Conv_DoubleToText_Value_ImplicitCast_30;  // 0x26A0(0x8)(Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor)
	double                                       CallFunc_Conv_DoubleToText_Value_ImplicitCast_31;  // 0x26A8(0x8)(Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_63;        // 0x26B0(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, AutoWeak)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_64;        // 0x26B4(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, AutoWeak)
	double                                       CallFunc_Conv_DoubleToText_Value_ImplicitCast_32;  // 0x26B8(0x8)(Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify)
	float                                        CallFunc_SetValue_NewValue_ImplicitCast_65;        // 0x26C0(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, Interp, AutoWeak)
};

// 0x8 (0x8 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.OnPresetDuplicated__DelegateSignature
struct UNinjaLiveGUI_C_OnPresetDuplicated__DelegateSignature_Params
{
public:
	class UDataTable*                            DuplicatedPreset;                                  // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.OnDensityMapSave__DelegateSignature
struct UNinjaLiveGUI_C_OnDensityMapSave__DelegateSignature_Params
{
public:
	bool                                         SavePaintBuffer;                                   // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x21 (0x21 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.OnPresetSave__DelegateSignature
struct UNinjaLiveGUI_C_OnPresetSave__DelegateSignature_Params
{
public:
	class FString                                SelectedProject;                                   // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	class FString                                SelectedPreset;                                    // 0x10(0x10)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         OverWriteOrNot;                                    // 0x20(0x1)(Net, Parm, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.OnPresetSelectionChanged__DelegateSignature
struct UNinjaLiveGUI_C_OnPresetSelectionChanged__DelegateSignature_Params
{
public:
	class FString                                SelectedPreset;                                    // 0x0(0x10)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         ForceAutoLoadPreset;                               // 0x10(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function NinjaLiveGUI.NinjaLiveGUI_C.OnSelectionChanged__DelegateSignature
struct UNinjaLiveGUI_C_OnSelectionChanged__DelegateSignature_Params
{
public:
	class FString                                SelectedMenuItem;                                  // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class FString                                SelectedActorName;                                 // 0x10(0x10)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
};

}
}


