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

// 0x70 (0x70 - 0x0)
// UserDefinedStruct Struct_VFX_DinoData.Struct_VFX_DinoData
struct FStruct_VFX_DinoData
{
public:
	class UMaterialInterface*                    FootPrintMaterialFront_40_9934BE724977867A05ECF4B30D0DEEBE; // 0x0(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UMaterialInterface*                    FootPrintMaterialBack_41_6DE4DFED4E1E9A8FCFEA78B3A1DD4290; // 0x8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       FootPrintSize_9_07EED46F49833309632BE9B80FEF09B8;  // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               FrontOffset_13_042EB71244BD073D424CE1ACC1F26E6C;   // 0x18(0x18)(BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               BackOffset_15_5896E7744D0C8029D1E1018271AB0D1F;    // 0x30(0x18)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       HoudiniScale_18_367AD654415C1909DD33DB9990F0FF91;  // 0x48(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UTexture*                              FrontTexture_36_E7B85FE84D4ED01F7BBDE68E374F0B15;  // 0x50(0x8)(Edit, BlueprintVisible, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UTexture*                              BackTexture_37_AF463293404EB69BD1C228A4371CECB9;   // 0x58(0x8)(ConstParm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UTexture*                              BackNormalTexture_38_E8AED8174904CE850931258D26AF5A3A; // 0x60(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UTexture*                              FrontNormalTexture_39_49DD42254279EB13CE20969B3BDB8940; // 0x68(0x8)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
};

}

