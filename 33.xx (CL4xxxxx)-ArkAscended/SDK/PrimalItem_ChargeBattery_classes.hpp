#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0xF00 - 0xEE0)
// BlueprintGeneratedClass PrimalItem_ChargeBattery.PrimalItem_ChargeBattery_C
class UPrimalItem_ChargeBattery_C : public UPrimalItem_Base_Battery_C
{
public:
	class FName                                  Icon_Parameter_Name;                               // 0xEE0(0x8)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       MinDurability;                                     // 0xEE8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<class UTexture2D*>                    batteryIcons;                                      // 0xEF0(0x10)(Edit, ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItem_ChargeBattery_C* GetDefaultObj();

	double BPGetItemDurabilityPercentage(double CallFunc_FClamp_ReturnValue, double CallFunc_Divide_DoubleDouble_B_ImplicitCast);
	double BPGetItemIcon(class AShooterPlayerController** ForPC, class UTexture2D* CallFunc_Array_Get_Item, class UTexture2D* CallFunc_Array_Get_Item_1, class UTexture2D* CallFunc_Array_Get_Item_2, class UTexture2D* CallFunc_Array_Get_Item_3, class UTexture2D* CallFunc_Array_Get_Item_4, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue_2, double CallFunc_Divide_DoubleDouble_B_ImplicitCast);
	double BPGetCustomInventoryWidgetText();
	double AddDurabilitySafe(double* AmountAdded, double* CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, double* CallFunc_Add_DoubleDouble_A_ImplicitCast, float* CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast);
	double BPUsedOntoItem(bool* K2Node_DynamicCast_bSuccess, bool* K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Subtract_IntInt_ReturnValue, double* CallFunc_Multiply_IntFloat_ReturnValue, class UObject** CallFunc_GetClassDefaultObject_ReturnValue, bool* K2Node_DynamicCast_bSuccess_2, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 CallFunc_Clamp_ReturnValue);
};

}


