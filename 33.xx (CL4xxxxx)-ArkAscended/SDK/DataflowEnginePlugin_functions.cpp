#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class DataflowEnginePlugin.DataflowActor
// (Actor)

class UClass* ADataflowActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataflowActor");

	return Clss;
}


// DataflowActor DataflowEnginePlugin.Default__DataflowActor
// (Public, ClassDefaultObject, ArchetypeObject)

class ADataflowActor* ADataflowActor::GetDefaultObj()
{
	static class ADataflowActor* Default = nullptr;

	if (!Default)
		Default = static_cast<ADataflowActor*>(ADataflowActor::StaticClass()->DefaultObject);

	return Default;
}


// Class DataflowEnginePlugin.DataflowComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UDataflowComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataflowComponent");

	return Clss;
}


// DataflowComponent DataflowEnginePlugin.Default__DataflowComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UDataflowComponent* UDataflowComponent::GetDefaultObj()
{
	static class UDataflowComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataflowComponent*>(UDataflowComponent::StaticClass()->DefaultObject);

	return Default;
}

}


