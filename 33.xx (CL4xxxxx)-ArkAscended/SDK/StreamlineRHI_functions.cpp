#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class StreamlineRHI.StreamlineOverrideSettings
// (None)

class UClass* UStreamlineOverrideSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StreamlineOverrideSettings");

	return Clss;
}


// StreamlineOverrideSettings StreamlineRHI.Default__StreamlineOverrideSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UStreamlineOverrideSettings* UStreamlineOverrideSettings::GetDefaultObj()
{
	static class UStreamlineOverrideSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UStreamlineOverrideSettings*>(UStreamlineOverrideSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class StreamlineRHI.StreamlineSettings
// (None)

class UClass* UStreamlineSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StreamlineSettings");

	return Clss;
}


// StreamlineSettings StreamlineRHI.Default__StreamlineSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UStreamlineSettings* UStreamlineSettings::GetDefaultObj()
{
	static class UStreamlineSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UStreamlineSettings*>(UStreamlineSettings::StaticClass()->DefaultObject);

	return Default;
}

}


