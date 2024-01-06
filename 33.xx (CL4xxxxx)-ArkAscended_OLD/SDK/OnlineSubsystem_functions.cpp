#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class OnlineSubsystem.NamedInterfaces
// (None)

class UClass* UNamedInterfaces::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NamedInterfaces");

	return Clss;
}


// NamedInterfaces OnlineSubsystem.Default__NamedInterfaces
// (Public, ClassDefaultObject, ArchetypeObject)

class UNamedInterfaces* UNamedInterfaces::GetDefaultObj()
{
	static class UNamedInterfaces* Default = nullptr;

	if (!Default)
		Default = static_cast<UNamedInterfaces*>(UNamedInterfaces::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystem.TurnBasedMatchInterface
// (None)

class UClass* ITurnBasedMatchInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TurnBasedMatchInterface");

	return Clss;
}


// TurnBasedMatchInterface OnlineSubsystem.Default__TurnBasedMatchInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class ITurnBasedMatchInterface* ITurnBasedMatchInterface::GetDefaultObj()
{
	static class ITurnBasedMatchInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<ITurnBasedMatchInterface*>(ITurnBasedMatchInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchReceivedTurn
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                      Match                                                            (Edit, ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bDidBecomeActive                                                 (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool ITurnBasedMatchInterface::OnMatchReceivedTurn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TurnBasedMatchInterface", "OnMatchReceivedTurn");

	Params::ITurnBasedMatchInterface_OnMatchReceivedTurn_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchEnded
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                      Match                                                            (Edit, ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

class FString ITurnBasedMatchInterface::OnMatchEnded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TurnBasedMatchInterface", "OnMatchEnded");

	Params::ITurnBasedMatchInterface_OnMatchEnded_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


