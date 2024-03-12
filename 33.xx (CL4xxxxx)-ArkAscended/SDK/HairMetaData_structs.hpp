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

// 0x63 (0x63 - 0x0)
// UserDefinedStruct HairMetaData.HairMetaData
struct FHairMetaData
{
public:
	class FString                                HairStyleNameString_8_59FC1375448902F8752BF083E928518D; // 0x0(0x10)(Edit, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         AllowHairSimulation_37_EA7DF01E4BCB91C29CE9EDBF80A4DC82; // 0x10(0x1)(ExportObject, Net, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_556C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVector>                       RestPos_3_C9C310CC4A789B406462C2B9CE2463B1;        // 0x18(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FVector>                       PivotPos_44_4FBB724349C3E81132566780C1E397F3;      // 0x28(0x10)(Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        GravityForce_11_E24D5DA542776710E028FF98BF678DE6;  // 0x38(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        DragForce_14_9EFA51F046A6820CCDD810A3FF7EFDB7;     // 0x3C(0x4)(Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        Damping_17_183EC7CD4D8F2ACB3F5F808DA235F0DD;       // 0x40(0x4)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        SpringForce_20_DAA8178C471BA72BFFE2CE9687F8E428;   // 0x44(0x4)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        HairScale_23_7C673D6C4FC356533C8767B74B66F8CF;     // 0x48(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        SpringForceFrontModifier_26_E808F33C40772F9214463B8CA42324E8; // 0x4C(0x4)(Edit, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        DampingFrontModifier_29_FB4BDA1D432A303773971C8C34F23A53; // 0x50(0x4)(Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        SpringForceBack_32_CC1CCA024FC7D522A1E189BCC5366068; // 0x54(0x4)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        DampingBack_35_70F79D6A40BF14CD6F8060ABBC263F89;   // 0x58(0x4)(ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        MaxRestDistance_40_22F3EB35435CE313C3AAEC855A006D0A; // 0x5C(0x4)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bPosAsPivot_47_B6FA83974BB12485C7E1F087EF4030CD;   // 0x60(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bCollideWithNeck_51_17E9F53E47565DB3C1E367ADE714F8A3; // 0x61(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bCollideMiddle_52_A3B59A144A6F79F5FFCD88916A60E2FA; // 0x62(0x1)(Edit, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

}


