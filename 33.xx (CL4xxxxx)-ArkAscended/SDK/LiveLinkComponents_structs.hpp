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
	bool                                         bWorldTransform;                                   // 0x0(0x1)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUseLocation;                                      // 0x1(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUseRotation;                                      // 0x2(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUseScale;                                         // 0x3(0x1)(Edit, BlueprintReadOnly, Net, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bSweep;                                            // 0x4(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Config, EditConst, SubobjectReference)
	bool                                         bTeleport;                                         // 0x5(0x1)(Edit, Net, EditFixedSize, Parm, ReturnParm, Config, EditConst, SubobjectReference)
};

}


