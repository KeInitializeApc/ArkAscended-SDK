#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x24 (0x354 - 0x330)
// WidgetBlueprintGeneratedClass WBP_PriceColumns.WBP_PriceColumns_C
class UWBP_PriceColumns_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UTextBlock*                            TB_COUNT;                                          // 0x338(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TB_SumPrice;                                       // 0x340(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	double                                       Price;                                             // 0x348(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Count;                                             // 0x350(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst)

	static class UClass* StaticClass();
	static class UWBP_PriceColumns_C* GetDefaultObj();

	void Construct();
	TArray<struct FFormatArgumentData> ExecuteUbergraph_WBP_PriceColumns(int64 CallFunc_Conv_IntToInt64_ReturnValue, double CallFunc_Multiply_IntFloat_ReturnValue, class FText* CallFunc_Format_ReturnValue, class FText* CallFunc_Format_ReturnValue_1);
};

}


