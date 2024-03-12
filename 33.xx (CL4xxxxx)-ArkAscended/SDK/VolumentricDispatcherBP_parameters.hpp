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

// 0x41 (0x41 - 0x0)
// Function VolumentricDispatcherBP.VolumentricDispatcherBP_C.FluidSpash
struct AVolumentricDispatcherBP_C_FluidSpash_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	float                                        Radius;                                            // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_33B8[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Velocity;                                          // 0x20(0x18)(Config, EditConst, GlobalConfig)
	class UNiagaraSystem*                        FluidSimSplashTemplateOverride;                    // 0x38(0x8)(Edit, ExportObject, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         PlaySplashSound;                                   // 0x40(0x1)(Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function VolumentricDispatcherBP.VolumentricDispatcherBP_C.ExecuteUbergraph_VolumentricDispatcherBP
struct AVolumentricDispatcherBP_C_ExecuteUbergraph_VolumentricDispatcherBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_33BC[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               K2Node_Event_Location;                             // 0x8(0x18)(Edit, ExportObject, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        K2Node_Event_Radius;                               // 0x20(0x4)(ConstParm, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_33BD[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               K2Node_Event_Velocity;                             // 0x28(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UNiagaraSystem*                        K2Node_Event_FluidSimSplashTemplateOverride;       // 0x40(0x8)(BlueprintVisible, Net, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_Event_PlaySplashSound;                      // 0x48(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_33BE[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class USoundBase*                            Temp_object_Variable;                              // 0x50(0x8)(EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class USoundBase*                            Temp_object_Variable_1;                            // 0x58(0x8)(EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	class USoundBase*                            K2Node_Select_Default;                             // 0x60(0x8)(Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	double                                       CallFunc_PlayFluidImpactEffect_Radius_ImplicitCast; // 0x68(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
};

}
}


