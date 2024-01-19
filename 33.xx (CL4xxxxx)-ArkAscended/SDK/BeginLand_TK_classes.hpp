#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x100 - 0xA8)
// BlueprintGeneratedClass BeginLand_TK.BeginLand_TK_C
class UBeginLand_TK_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	struct FBlackboardKeySelector                OnLandKey;                                         // 0xB0(0x28)(ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	struct FBlackboardKeySelector                NavigationPointKey;                                // 0xD8(0x28)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UBeginLand_TK_C* GetDefaultObj();

	class AActor* ReceiveExecute();
	double ExecuteUbergraph_BeginLand_TK(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor, bool CallFunc_Greater_DoubleDouble_ReturnValue);
};

}


