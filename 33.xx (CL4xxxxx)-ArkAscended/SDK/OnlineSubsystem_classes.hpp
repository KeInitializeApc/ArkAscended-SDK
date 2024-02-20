#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x60 - 0x28)
// Class OnlineSubsystem.NamedInterfaces
class UNamedInterfaces : public UObject
{
public:
	TArray<struct FNamedInterface>               NamedInterfaces;                                   // 0x28(0x10)(BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst)
	TArray<struct FNamedInterfaceDef>            NamedInterfaceDefs;                                // 0x38(0x10)(BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_A[0x18];                                       // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNamedInterfaces* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class OnlineSubsystem.TurnBasedMatchInterface
class ITurnBasedMatchInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITurnBasedMatchInterface* GetDefaultObj();

	bool OnMatchReceivedTurn();
	class FString OnMatchEnded();
};

}


