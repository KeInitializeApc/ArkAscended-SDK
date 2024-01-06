#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class PCGGeometryScriptInterop.PCGMeshSamplerSettings
// (None)

class UClass* UPCGMeshSamplerSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGMeshSamplerSettings");

	return Clss;
}


// PCGMeshSamplerSettings PCGGeometryScriptInterop.Default__PCGMeshSamplerSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGMeshSamplerSettings* UPCGMeshSamplerSettings::GetDefaultObj()
{
	static class UPCGMeshSamplerSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGMeshSamplerSettings*>(UPCGMeshSamplerSettings::StaticClass()->DefaultObject);

	return Default;
}

}


