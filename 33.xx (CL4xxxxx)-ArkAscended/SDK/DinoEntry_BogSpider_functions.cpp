#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_BogSpider.DinoEntry_BogSpider_C
// (None)

class UClass* UDinoEntry_BogSpider_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_BogSpider_C");

	return Clss;
}


// DinoEntry_BogSpider_C DinoEntry_BogSpider.Default__DinoEntry_BogSpider_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_BogSpider_C* UDinoEntry_BogSpider_C::GetDefaultObj()
{
	static class UDinoEntry_BogSpider_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_BogSpider_C*>(UDinoEntry_BogSpider_C::StaticClass()->DefaultObject);

	return Default;
}

}


