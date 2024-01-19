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

// 0x6 (0x6 - 0x0)
// ScriptStruct LiveLinkComponents.LiveLinkTransformControllerData
struct FLiveLinkTransformControllerData
{
public:
	bool                                         bWorldTransform;                                   // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
	bool                                         bUseLocation;                                      // 0x1(0x1)(EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
	bool                                         bUseRotation;                                      // 0x2(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, Config, InstancedReference, SubobjectReference)
	bool                                         bUseScale;                                         // 0x3(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, Config, InstancedReference, SubobjectReference)
	bool                                         bSweep;                                            // 0x4(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bTeleport;                                         // 0x5(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

}


