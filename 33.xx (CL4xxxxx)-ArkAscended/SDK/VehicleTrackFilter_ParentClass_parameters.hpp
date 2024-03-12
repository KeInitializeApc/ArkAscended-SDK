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

// 0x3E (0x3E - 0x0)
// Function VehicleTrackFilter_ParentClass.VehicleTrackFilter_ParentClass_C.ShouldActorBeTracked
struct UVehicleTrackFilter_ParentClass_C_ShouldActorBeTracked_Params
{
public:
	class AActor*                                InvestigatedActor;                                 // 0x0(0x8)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        CustomTameSelectionType;                           // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        DinoGroup;                                         // 0xC(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	class FString                                CustomTameSearchText;                              // 0x10(0x10)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	class AShooterGameMode*                      GameMode;                                          // 0x20(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, Transient, GlobalConfig)
	class APlayerState*                          PlayerState;                                       // 0x28(0x8)(ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig)
	class AShooterCharacter*                     Requesting_player_Shooter_Character;               // 0x30(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         Debug_Enabled;                                     // 0x38(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         Handled;                                           // 0x39(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig)
	bool                                         ReturnValue;                                       // 0x3A(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         Ret_should_show;                                   // 0x3B(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_ShouldActorBeTracked_Handled;             // 0x3C(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_ShouldActorBeTracked_ReturnValue;         // 0x3D(0x1)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

}
}


