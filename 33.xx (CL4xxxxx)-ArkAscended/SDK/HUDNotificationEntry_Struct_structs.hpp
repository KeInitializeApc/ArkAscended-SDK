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

// 0x4C (0x4C - 0x0)
// UserDefinedStruct HUDNotificationEntry_Struct.HUDNotificationEntry_Struct
struct FHUDNotificationEntry_Struct
{
public:
	class FString                                String_2_89E4AA5D441146BEC0922A9AD1ECB396;         // 0x0(0x10)(Edit, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FColor                                Color_5_478C904A4C94C267E7C068B6A3D51B47;          // 0x10(0x4)(Edit, BlueprintVisible, ExportObject, Parm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1C25[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInterface*                    Material_15_EAD942E84375F19135546BAF2FC1726E;      // 0x18(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTexture2D*                            Texture_16_CDF6DD6046C5D5E43A772E89B6E8FCA6;       // 0x20(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       DisplayTime_17_7F57B1624B207267D2A7089D66EB9C2A;   // 0x28(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       DisplayScale_18_B81F1E444B15F8547B10DAB4788519CF;  // 0x30(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsSingleton_21_D5DC74DD4A3A13CE79AC45912D8517E4;  // 0x38(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1C2C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        MessageTypeID_27_0057A664431B45EC414627AAAA36880B; // 0x3C(0x4)(Edit, BlueprintVisible, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       LastTime_30_CA71EB694E4B04E4D358508D51D0271F;      // 0x40(0x8)(BlueprintVisible, ExportObject, Net, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        Priority_33_FA91F12046A70ABAA493EFB16B389EF0;      // 0x48(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

}


